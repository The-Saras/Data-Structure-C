#include <stdio.h>
#include <string.h>
int top, stack[100];
void push(char x)
{
    if (top == 100 - 1)
    {
        printf("Stack overflowed...");
    }
    else
    {
        stack[++top] = x;
    }
}
void pop()
{
    printf("%c", stack[top--]);
}
int main()
{
    char str[] = "Sri Lanka";
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }
    for (i = 0; i < len; i++)
    {
        pop();
    }
}