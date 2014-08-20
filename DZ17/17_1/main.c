#include <stdio.h>
#include <stdlib.h>

int main()
{
    double stack[256],a,b;
    int top = -1;
    char temp;
    while (temp!='=')
    {
        scanf("%c", &temp);
        switch(temp)
        {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            stack[++top]=(double)(temp-'0');
            break;
        case '-':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a-b;
            break;
        case '+':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a+b;
            break;
        case '*':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a*b;
            break;
        case '/':
            b=stack[top--];
            a=stack[top--];
            stack[++top]=a/b;
            break;
        case '=':
            printf("%f\n", stack[top]);
            break;
        }
    }
    return 0;
}
