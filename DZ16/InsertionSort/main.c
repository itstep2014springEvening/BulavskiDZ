#include <stdio.h>
#include <stdlib.h>
#include "InsertionSort.h"

int main()
{
    const int N = 10000;
    int a[N];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    input(a, n);
    InsertionSort(a,n);
    output(a, n);
    return 0;
}

