#include <stdio.h>
#include <stdlib.h>

/* -------------------------------------- STACK IMPLEMENTATION START -------------------------------------*/

typedef struct Stack{
    int last;
    int * arr;
}Stack;

int * buildStack(int n){
    int * arr = (int *)malloc(n*sizeof(int));
}

void push(Stack * st1, int data){
    (*st1).arr[++(*st1).last] = data;
}

void pop(Stack * st1){
    st1 -> last--;
}

int size(Stack * st1){
    return st1 -> last + 1;
}

int top(Stack * st1){
    return st1 -> arr[st1 -> last];
}

int empty(Stack * st1){
    return st1 -> last == -1;
}

/* -------------------------------------- STACK IMPLEMENTATION START -------------------------------------*/

// Checking if character is operator or not
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// For Prefix we have to reverse a String 
void reverseString(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Check if the character is alphabet , digit or operator

// If the character is operator return 0 else return 1
int alphaNum(char ch){
    if(ch >= 'a' && ch <= 'z') return 1;
    if(ch >= 'A' && ch <= 'Z') return 1;
    if(ch >= '0' && ch <= '9') return 1;
    return 0;
}

// Create a Precedence Table for all operators
int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

// Main Function which provides prefix expresion
void infixToPrefix(char infix[], char prefix[]){
    
    Stack st1;  st1.arr = buildStack(1000); // Give the value of maximum constraint

    st1.last = -1; // Initialize stack with last equal to -1 index

    int i = 0, j = 0;
    reverseString(infix); // so we need to reverse the infix expression for getting prefix expression

    // Replace closing brackets with opening brackets 
    // And replace opening brackets with closing brackets
    for (i = 0; infix[i] != '\0' ; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    // Untill we get termination chracter from infix run the loop
    for (i=0;infix[i]!='\0';i++) {

        // If current character is not an operator then append it in the prefix 
        if(alphaNum(infix[i])){
            prefix[j++] = infix[i];
        }

        // If current character is closing bracket the just push it in the stack
        else if(infix[i] == '('){
            push(&st1,infix[i]);
        }
        
        // But if the current character is opening bracket then untill we get closing bracket 
        // append all the elements in stack in prefix untill it get empty or we get closing bracket

        else if(infix[i] == ')'){
            while(!empty(&st1) && top(&st1) != '('){
                char t = top(&st1);
                prefix[j++] = t;
                pop(&st1);
            }
            // POp the closing closing bracket and increment i
            pop(&st1);
        }

        // Now if the character is an operator 
        else if (isOperator(infix[i])){
            // Check the precedence 

            // If precedence of character at top of stack is greater or equal to precedence of current character  
            while(!empty(&st1) && precedence(top(&st1)) > precedence(infix[i])){

                // Remove that operator from stack and add it to prefix array
                char t = top(&st1);
                prefix[j++] = t;
                pop(&st1);
            }
            // At last push the current operator to stack
            push(&st1, infix[i]);
        }
    }
    // At Last if something left in stack then just add it to prefix array
    while(!empty(&st1)){
        char t = top(&st1);
        prefix[j++] = t;
        pop(&st1);
    }
    // At last index where our prefix ended set value at that index to termination character to make that string end
    prefix[j] = '\0';

    // Reverse the string again and we get the result
    reverseString(prefix); 
}

int main(){
    char infix[1000] = "2+3^(4-(1+2)^2+((3-2)*4)+3)";
     
    char prefix[1000];
    // Bracket --> Exponent --> Mul --> Div/Mod --> Add/Sub
    infixToPrefix(infix,prefix);
    printf("%s\n",prefix);
    return 0;
}