#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Stack{
	int last;
	int * arr;
}Stack;


int * buildStack(int n ){
	return (int *)malloc( n * sizeof(int));
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


int alphaNum(char ch){
	if(ch >= 'a' && ch <= 'z') return 1;
	if(ch >= 'A' && ch <= 'Z') return 1;
	if(ch >= '0' && ch <= '9') return 1;
	return 0;
}


void infixToPostfix(char infix[], char postfix[]){
	Stack st1 = {-1};
	st1.arr = buildStack(1000);//1000 // arg should be length of infix
	int i = 0, j=0;
	while(infix[i]!= '\0'){
		if(alphaNum(infix[i])){
			postfix[j++] = infix[i++];
		}
		else if(infix[i] == '('){
			push(&st1, infix[i++]);
		}
		else if(infix[i] == ')'){
			while(top(&st1)!= '('){
				char t = top(&st1);
				pop(&st1);
				postfix[j++] = t;
			}
			pop(&st1);
			i++;
		}
		else
		{
			if((empty(&st1)) || infix[i] == '^'){
				push(&st1, infix[i++]);
			}
			else{
				if((infix[i] == '*' || infix[i] == '/' || infix[i] == '+' || infix[i] == '-') && top(&st1) == '^'){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else if((infix[i] == '/' || infix[i] == '+' || infix[i] == '-') && (top(&st1) == '*')){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else if((infix[i] == '+' || infix[i] == '-') && (top(&st1) == '/')){
					char t = top(&st1);
					postfix[j++] = t;
					pop(&st1);
				}
				else{
					push(&st1, infix[i++]);
				}
			}
		}
	}
	while(!empty(&st1)){
		char t = top(&st1);
		pop(&st1);
		postfix[j++] = t;
	}
	postfix[j] = '\0';
}

int powr(int a,int b){
    int power = 1;
    for(int i=0;i<b;i++){
        power *=a;
    }
    return power;
}

int postfixEval(char postfix[]){
    Stack st2 = {-1};
	st2.arr = buildStack(strlen(postfix));
    int i = 0;
    while(postfix[i]!='\0'){
        if(alphaNum(postfix[i])){
            push(&st2,postfix[i]-'0');
        }
        else{
            int op1 = top(&st2);
            pop(&st2);
            int op2 = top(&st2);
            pop(&st2);
            switch(postfix[i]){
                case '+':
                    push(&st2,op2 + op1);
                    break;
                case '-':
                    push(&st2,op2 - op1);
                    break;
                case '*':
                    push(&st2,op2 * op1);
                    break;
                case '/':
                    push(&st2,op2 / op1);
                    break;
                case '^':
                    push(&st2, powr(op2,op1));
                    break;
            }
        }
        i++;
    }
    return top(&st2);

}

int main(){
	// Bracket --> Exp --> mul --> Div/Mod --> Add/Sub
	// char infix[] = "(a+(b*c/d))"; // abc*d/+, //ab+c*d/ , // abc*d/+
	char infix[] = "(2+3)^(4-1)";
	char postfix[100];
	infixToPostfix(infix, postfix);
    printf("%d\n",postfixEval(postfix));
	return 0;
}