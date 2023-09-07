#include <stdio.h>
#include <stdlib.h>

// Convert Expression to Post Fix Expression
// Example
// 2-5X2 => 252X-

typedef struct Stack
{
    int last;
    char * arr;
} Stack;

char * buildStack(int n)
{
    char * arr = (char *)(malloc(n * sizeof (char)));
} 

void push(Stack * stack, char data)
{
    stack->arr[++stack->last] = data;
}

char top(Stack * stack)
{
    return stack->arr[stack->last];
}

void pop(Stack * stack)
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
    scanf("\n%s",in);

    char out[1000];
    int idx = 0;

    for (int i=0;in[i]!='\0';i++)
    {
        if (in[i]=='+' || in[i]=='-')
        {
            if (top
        (&stack)=='x' || top
        (&stack)=='/')
            {
                while (!empty(&stack) && top
            (&stack)!='x' || top
            (&stack)!='/')
                {
                    out[idx++] = top
                (&stack);
                    pop(&stack);
                }
            }
            push(&stack, in[i]);
        }
        else if (in[i]=='x' || in[i]=='/')
        {
            push(&stack, in[i]);
        }
        else 
        {
            out[idx++] = in[i];
        }
    }

    while(!empty(&stack))
    {
        out[idx++] = top
    (&stack);
        pop(&stack);
    }

    printf("%s", out);

    



}
