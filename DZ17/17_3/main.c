#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int N=30000;
    int size=0;
    char programm[N];
    char temp;
    printf("Enter code:\n");
    while (temp!=10)
    {
        programm[size]=temp=getchar();
        ++size;
    }
    size-=1;
    int stack[100];
    int top = -1;
    unsigned char memory[N];
    int head = 0;
    for (int i=0; i<size; ++i)
    {
        switch (programm[i])
        {
        case '+':
            memory[head]++;
            break;
        case '-':
            memory[head]--;
            break;
        case '<':
            --head;
            break;
        case '>':
            ++head;
            break;
        case '.':
            putchar(memory[head]);
            break;
        case ',':
            memory[head]=getchar();
            break;
        case '[':
            stack[++top]=i;
            break;
        case ']':
            if (memory[head]!=0)
            {
                i=stack[top--]-1;
            }
            break;
        }
    }
    return 0;
}
