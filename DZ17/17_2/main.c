#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=30000;
    char memory[N];
    int head = 0;
    char temp;
    printf("Enter code:\n");
    while (temp!=';')
    {
        scanf("%c", &temp);
        switch (temp)
        {
        case '+':
            memory[head]++;
            break;
        case '-':
            --memory[head];
            break;
        case '<':
            --head;
            break;
        case '>':
            ++head;
        case '.':
            printf("%c", memory[head]);
            break;
        case ';':
            break;
        }
    }
    return 0;
}
