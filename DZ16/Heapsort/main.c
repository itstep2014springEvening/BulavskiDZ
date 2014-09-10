#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[N];
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    srand(time(NULL));
    input(arr, n);
    output(arr, n);
    heapsort(arr, n);
    output(arr, n);
    return 0;
}

