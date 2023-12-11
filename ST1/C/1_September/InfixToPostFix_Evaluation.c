#include <stdio.h>

#define MAX_SIZE 100

// Check if the character is operator or not 
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

// Return the precedence of the operator
int getPrecedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return 0;
}

// Return if the character is alphabet, digit or an operator

// If operator return false otherwise true
int alphaNum(char ch){
	if(ch >= 'a' && ch <= 'z') return 1;
	if(ch >= 'A' && ch <= 'Z') return 1;
	if(ch >= '0' && ch <= '9') return 1;
	return 0;
}

// Main Conversion of Infix to Postfix
void infixToPostfix(char infix[], char postfix[]) {

    // Implementing Stack using array
    char stack[MAX_SIZE];

    // initializing a stack index as -1 
    int top = -1;
    int i, j = 0;

    //  Until the current character is termination character
    for (i = 0; infix[i] != '\0'; i++) {

        // If current character is an alphabet or digit append it in postfix
        if (alphaNum(infix[i])) {
            postfix[j++] = infix[i];
        } 
        
        // If we encounter an opening bracket append it in stack
        else if (infix[i] == '(') {
            stack[++top] = infix[i];
        } 
        
        // If it comes a closing bracket until we get opening bracket from stack
        else if (infix[i] == ')') {

            // append the operators in postfix
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }

            // If stack is not empty and there is opening bracket at the top of stack remove it 
            if (top >= 0 && stack[top] == '(') {
                top--;
            }
        }
        // But if the character is operator and operator at top of stack has high precedence than current operator
        // Remove that operator from stack and add it to postfix 
        // At Last add current operator in stack 
        else if (isOperator(infix[i])) {
            while (top >= 0 && getPrecedence(stack[top]) >= getPrecedence(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    // If stack in not empty yet add all remaining elements in stack to postfix
    while (top >= 0) {
        postfix[j++] = stack[top--];
    }

    // Index where our postfix got end set termination character to that index to end our string
    postfix[j] = '\0';
}

// Main POST FIX EVALUATION 
int evaluatePostfix(char postfix[]){
    // Initialize Stack with a top index of -1 denoting empty stack
    int stack[MAX_SIZE];
    int top = -1;
    int i,operand1,operand2,result;

    // While we encounter termination character in postfix 
    for(i = 0;postfix[i]!='\0';i++){
        // If character is digit
        // Convert it to integer form and append it in stack 
        if(alphaNum(postfix[i])){
            stack[++top] = postfix[i] - '0';
        }

        // If operator remove two elements from top store it in two different variables
        else if(isOperator(postfix[i])){
            operand2 = stack[top--];
            operand1 = stack[top--];

            // And perform operation on both values according to operator
            switch (postfix[i]) {
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
                    // Basically inbuilt pow function doesn't give desired values that's why loop is made to calculate power
                    for(int j = 0; j < operand2; j++) {
                        result *= operand1;
                    }
                    break;
            }
            // At end append the result of two values in stack
            stack[++top] = result;
        }
    }

    // Return stack top element
    return stack[0];
}

int main() {
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE] = "2+3^(4-(1+2)^2+((3-2)*4)+3)";

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n",result);
    return 0;
}
