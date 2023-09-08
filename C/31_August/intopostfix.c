#include<stdio.h>
#include<stdlib.h>

/* -------------------------------- STACK IMPLEMENTAION ------------------------------------ */

// Main Structure of Stack
typedef struct Stack{
	int last;
	int * arr;
}Stack;

// Building a Stack
int * buildStack(int n ){
	int max = 1000;
	if(n>1000) max = n;
	return (int *)malloc( max * sizeof(int));
}


//push 
void push(Stack * st1, int data){
	(*st1).last++;
	// printf("%d\n", st1.last);
	(*st1).arr[(*st1).last] = data;
}


//pop
void pop(Stack * st1){
	st1->last--;
}


//top
int top(Stack * st1){
	return st1->arr[st1->last];
}


//size
int size(Stack * st1){
	return (st1->last+1);
}


//empty
int empty(Stack * st1){
	return st1->last == -1;
}

/* -------------------------------- STACK IMPLEMENTAION ENDED ------------------------------------ */


// Function to detect whether the character is operator or not 
// If it not a operator then return true otherwise false
int alphaNum(char ch){
	if(ch >= 'a' && ch <= 'z') return 1;
	if(ch >= 'A' && ch <= 'Z') return 1;
	if(ch >= '0' && ch <= '9') return 1;
	return 0;
}

// Precedence Table to track the precedence of the operators easily
int precedence(char ch) {
    switch(ch) {
        case '^': return 4; /* ^ has the highest precedence*/
        case '*': return 3;
        case '/': return 2;
        case '+':
        case '-': return 1; /* - has the lowest precedence */
        default: return 0;
    }
}

// Main Function which evaluate the expression from infix to postfix
void infixToPostfix(char infix[], char postfix[]){
	Stack st1 = {-1}; /* Initializing the stack with last = -1 index*/
	st1.arr = buildStack(10); //1000 // arg should be length of infix

	// Initializing variables
	int i = 0, j=0;

	// Unitll our character is the termination character we have to run loop
	while(infix[i]!= '\0'){
		
		// If character is not operator i.e +,-, etc. then append it in postfix array as it is
		if(alphaNum(infix[i])){
			postfix[j++] = infix[i++];
		}
		
		// If character is open bracket push it in stack
		else if(infix[i] == '('){
			push(&st1, infix[i++]);
		}

		// If character is closed bracket then untill open bracket in stack is found append values of stack in postfix array
		else if(infix[i] == ')'){
			while(top(&st1)!= '('){
				char t = top(&st1);
				pop(&st1);
				postfix[j++] = t;
			}
			// Pop the open bracket and update i 
			pop(&st1);
			i++;
		}
		// Now if the character is an operator
		else
		{	
			// If stack is empty or operator is ^ just push it as it has the highest precedence
			if((empty(&st1)) || infix[i] == '^'){
				push(&st1, infix[i++]);
			}
			// Otherwise if the stack is not empty
			else{
				// Check if the precendence of operator at top of stack is more than the current operator from infix
				if (!empty(&st1) && (precedence(top(&st1)) > precedence(infix[i])))
				{
					// Append that operator in postfix and remove that operator from stack
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else{
					// Else if the precedence of operator at top of stack is less than the current operator from infix
					// Just push it in stack
					push(&st1, infix[i++]);
				}
			}
		}
	}
	// At Last If there is still elements left in stack
	while(!empty(&st1)){
		// Add them in postfix and keep removing the elements from stack
		char t = top(&st1);
		pop(&st1);
		postfix[j++] = t;
	}
	// Index where our expression end , Add termination character to get it know that our string ended
	postfix[j] = '\0';
}


int main(){
	// Bracket --> Exp --> mul --> Div/Mod --> Add/Sub
	char infix[] = "(a+(b*c/d))"; // abc*d/+, //ab+c*d/ , // abc*d/+
	// char infix[] = "2+3^(4-(1+2)^2+((3-2)*4)+3)";
	char postfix[100];
	infixToPostfix(infix, postfix);
	printf("%s\n", postfix);
	return 0;
}