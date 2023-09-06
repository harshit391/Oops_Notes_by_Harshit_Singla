#include <stdio.h>
#include <stdlib.h>

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

int alphaNum(char ch){
    if(ch >= 'a' && ch <= 'z') return 1;
    if(ch >= 'A' && ch <= 'Z') return 1;
    if(ch >= '0' && ch <= '9') return 1;
    return 0;
}

int precedence(char ch) {
    switch(ch) {
        case '^': return 4;
        case '*': return 3;
        case '/': return 2;
        case '+':
        case '-': return 1;
        default: return 0;
    }
}

void infixToPrefix(char infix[], char prefix[]){
    Stack st1;  st1.arr = buildStack(1000); // correct argument should be the length of the array
    st1.last = -1;
    int i = 0, j = 0;
    reverseString(infix); // so we need to reverse the input infix expression
    while(infix[i]!='\0'){
        if(alphaNum(infix[i])){
            prefix[j++] = infix[i++];
        }
        else if(infix[i] == ')'){
            push(&st1,infix[i]);
            i++;
        }
        else if(infix[i] == '('){
            while(!empty(&st1) && top(&st1) != ')'){
                char t = top(&st1);
                prefix[j++] = t;
                pop(&st1);
            }
            pop(&st1);
            i++;
        }
        else{
            while(!empty(&st1) && precedence(top(&st1)) >= precedence(infix[i])){
                char t = top(&st1);
                prefix[j++] = t;
                pop(&st1);
            }
            push(&st1, infix[i++]);
        }
    }
    while(!empty(&st1)){
        char t = top(&st1);
        prefix[j++] = t;
        pop(&st1);
    }
    prefix[j] = '\0';
    reverseString(prefix); // now we need to reverse again
}

int main(){
    char infix[1000] = "2+3^(4-(1+2)^2+((3-2)*4)+3)";
     
    char prefix[1000];
    // Bracket --> Exponent --> Mul --> Div/Mod --> Add/Sub
    infixToPrefix(infix,prefix);
    printf("%s\n",prefix);
    return 0;
}