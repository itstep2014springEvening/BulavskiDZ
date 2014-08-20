#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=30000;
    char stack[N],a=0;
    int top = -1;
    char temp;
    printf("Enter code:\n");
    while (temp!=';')
    {
        scanf("%c", &temp);
        switch (temp)
        {
            stack[++top]=temp;
        case '+':
            stack[++top]=++a;
            break;
        case '-':
            stack[++top]=--a;
            break;
        case '<':
            --top;
            break;
        case '>':
            ++top;
        case '.':
            printf("%c", stack[top]);
            break;
        case ';':
            break;
        }
    }
    return 0;
}
