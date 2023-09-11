#include <stdio.h>
#include <stdlib.h>

// Reverse String Using Stack


typedef struct Stack
{
    int last;
    char * arr;
} Stack;

char * buildStack(int n)
{
    int max = 1000;
    if (max < n) max = n;

    char * arr = (char *)(malloc(max * sizeof (char)));
} 

void push(Stack * stack, char data)
{
    stack->arr[++stack->last] = data;
}

char peek(Stack * stack)
{
    return stack->arr[stack->last];
}

void pop(Stack * stack)
{
    stack->last--;
}

int main()
{
    Stack stack;
    stack.last = -1;

    int n;
    scanf("%d",&n);

    stack.arr = buildStack(n);

    char in[1000];
    scanf("\n%s",in);

    for (int i=0;i<n;i++)
    {
        push(&stack, in[i]);
    }

    char out[1000];
    int idx = 0;

    while (peek(&stack)!='\0')
    {
        out[idx++] = peek(&stack);  
        pop(&stack);
    }
    printf("%s", out);

    



}
