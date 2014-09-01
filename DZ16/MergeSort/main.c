#include <stdio.h>
#include <stdlib.h>
#include "mymergesort.h"


int main()
{
    int arr[N];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    input(arr, n);
    output(arr, n);
    mergesort(arr,0,n-1);
    output(arr, n);
    return 0;
}

