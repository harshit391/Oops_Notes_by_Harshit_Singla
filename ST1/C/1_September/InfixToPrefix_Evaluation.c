#include <stdio.h>

#define MAX 100

// Checking if character is operator or not
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// To fetch precedence of the operator
int getPrecedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

// To check if the character is digit or not
int alphaNum(char ch){
	if(ch >= 'a' && ch <= 'z') return 1;
	if(ch >= 'A' && ch <= 'Z') return 1;
	if(ch >= '0' && ch <= '9') return 1;
	return 0;
}

// Reverse String function
void reverseString(char str[]){
    int i,j,length = 0;
    char temp;
    for(i=0;str[i]!='\0';i++){
        length++;
    }
    // Two pointers loop
    for(i=0,j=length-1;i<j;i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Converting Infix to Prefix
void infixToPrefix(char infix[], char prefix[]){

    // Intializing stack with top index -1 denoting stack is empty
    char stack[MAX];
    int top = -1;
    int i,j=0;
    
    // Reverse the string for prefix
    reverseString(infix);

    // Replace closing brackets with opening brackets 
    // And replace opening brackets with closing brackets
    for (i = 0; infix[i] != '\0' ; i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        } else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    // Main Conversion
    for(i=0;infix[i]!='\0';i++){

        // If character is digit add it to prefix
        if(alphaNum(infix[i])){
            prefix[j++] = infix[i];
        }

        // If opening bracket append it to stack
        else if(infix[i] == '('){
            stack[++top] = infix[i];
        }

        // If closing bracket untill we encounter opening bracket remove the element from top of stack and add it to prefix
        else if(infix[i] == ')'){
            while(top>=0 && stack[top]!='('){
                prefix[j++] = stack[top--];
            }
            // Remove the opening bracket if stack is not empty
            if(top>=0 && stack[top] == '('){
                top--;
            }
        }

        // If character is operator

        // If precendence of top of stack operator is greater then operator at current character remove it and add it to prefix array
        else if(isOperator(infix[i])){
            while(top>=0 && getPrecedence(stack[top]) > getPrecedence(infix[i])){
                prefix[j++] = stack[top--];
            }
            // Add current operator to stack
            stack[++top] = infix[i];
        }
    }
    // IF elements left in stack add it to prefix array
    while(top>=0){
        prefix[j++] = stack[top--];
    }

    // At Index ended j, set that value to termination character to know that our string got ended
    prefix[j] = '\0';

    // Now reverse the prefix string for our result prefix expression
    reverseString(prefix);
}

// Prefix Evaluation
int evaluatePrefix(char prefix[]){
    // Intialize a Stack with top index -1
    int stack[MAX];
    int top = -1;

    int i,operand1,operand2,result;
    int length = 0;

    // Calculate length of prefix string
    for(int i=0;prefix[i]!='\0';i++){
        length++;
    }

    // Reverse iterate the array 
    for(i = length-1;i>=0;i--){
        // If character is digit convert it to integer and append it in stack
        if(alphaNum(prefix[i])){
            stack[++top] = prefix[i] - '0';
        }
        // IF operator 
        else if(isOperator(prefix[i])){
            // Fetch two elements from stack , store it and remove them from stack
            operand1 = stack[top--];
            operand2 = stack[top--];

            // And perform desired operation on them as per operator and store it in a variable
            switch (prefix[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                case '^':
                    result = 1;
                    for(int j = 0; j < operand2; j++) {
                        result *= operand1;
                    }
                    break;
            }
            // Append that result value in stack
            stack[++top] = result;
        }
    }

    // Return element stored at top of stack
    return stack[0];
}


int main() {
    char prefix[MAX];
    char infix[MAX] = "2+3^(4-(1+2)^2+((3-2)*4)+3)";

    infixToPrefix(infix, prefix);

    printf("Postfix expression: %s\n", prefix);

    int result = evaluatePrefix(prefix);
    printf("Result: %d\n",result);
    return 0;
}