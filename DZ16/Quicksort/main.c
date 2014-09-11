#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myquicksort.h"

int main()
{
    int arr[N];
    int n;
    int l=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    srand(time(NULL));
    input(arr, n);
    output(arr, n);
    quicksort(arr, l, n-1);
    output(arr, n);
    return 0;
}

