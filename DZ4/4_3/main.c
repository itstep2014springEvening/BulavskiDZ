#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    int x;
    int y=1;
    int p=0;
    printf("Enter number L:\n");
    scanf("%d", &L);
    printf("Enter number x:\n");
    scanf("%d", &x);
    do {
        y*=x;
        ++p;
    } while (y<=L);
    --p;
    printf("Result = %d", p);
    return 0;
}
