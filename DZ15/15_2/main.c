#include <stdio.h>
#include <stdlib.h>
#include "mysearch.h"

void input (int array[], int size);
void output (int array[], int size);
void search (int array[], int size, int n);

int main()
{
    const int N=10000;
    int array[N], size;
    printf("Enter array size:");
    scanf("%d", &size);
    input(array,size);
    output(array,size);
    printf("Enter number:");
    int n;
    scanf("%d", &n);
    search(array, size, n);
    return 0;
}

