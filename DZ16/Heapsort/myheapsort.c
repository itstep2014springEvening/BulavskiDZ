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


void repair (int array[], int i, int size)
{
    int l, r, larg, temp;
    l=2*i+1;
    r=2*i+2;
    larg=i;
    if (l<=size && array[l]>array[i])
        larg=l;
    if (r<=size && array[r]>array[larg])
        larg=r;
    if (larg!=i)
    {
        temp=array[i];
        array[i]=array[larg];
        array[larg]=temp;
        repair(array,larg,size);
    }
}


void build(int array[], int size)
{
    for (int i=size/2; i>=0; --i)
        repair(array, i, size);
}


void heapsort (int array[], int size)
{
    int temp;
    build(array,size);
    for (int i=size-1; i>=1; --i)
    {
        temp=array[i];
        array[i]=array[i-i];
        array[i-i]=temp;
        --size;
        repair(array, i-i, i-1);
    }
}
