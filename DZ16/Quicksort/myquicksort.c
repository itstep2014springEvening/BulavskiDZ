#include <stdio.h>
#include <stdlib.h>

void input (int arr[], int n)
{
    for (int i=0; i<n; ++i)
    {
        arr[i]=rand();
    }
}

void output(int arr[], int n)
{
    for (int i=0; i<n; ++i)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int partition (int array[], int l, int r)
{
    int i=l;
    while (array[i]<array[r])
        ++i;

    for (int j=i; j<r; ++j)
        if (array[j]<array[r])
        {
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            ++i;
        }

    int temp=array[r];
    array[r]=array[i];
    array[i]=temp;
    return i;
}

void quicksort (int array[], int l, int r)
{
    if (l<r)
    {
        int m=partition(array, l, r);
        quicksort (array, l, m-1);
        quicksort (array, m+1, r);
    }
}
