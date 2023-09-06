#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int last;
    char * arr;
} Stack;

char * buildStack(int n)
{
    char * arr = (char *)(malloc((n) * sizeof (char)));
} 

void push(Stack * stack, char data)
{
    stack->arr[++stack->last] = data;
}

char peek(Stack * stack)
{
    return stack->arr[stack->last];
}

int pop(Stack * stack)
{
    stack->last--;
}

int size(Stack * stack)
{
    return stack->last+1;
}

int empty(Stack * stack)
{
    if (size(stack)==0) return 1;

    return 0;
}

int main()
{
    Stack stack;
    stack.last = -1;

    stack.arr = buildStack(1000);

    char in[1000];
    scanf("%s",in);
    int flag = 1;
    for (int i=0;in[i]!='\0';i++)
    {
        if (in[i]=='(' || in[i]=='{' || in[i]=='[')
        push(&stack, in[i]);

        else if ((in[i]==')' && peek(&stack)=='(') || (in[i]==']' && peek(&stack)=='[') || (in[i]=='}' && peek(&stack)=='{'))
        pop(&stack);

        else{
            if (empty(&stack))
            {
                flag = 0;
                break;
            }
        }

    }

    if (empty(&stack) && flag) printf("true");
    else printf("false");


}