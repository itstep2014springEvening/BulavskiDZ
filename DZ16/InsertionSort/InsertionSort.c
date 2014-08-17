#include <stdio.h>
#include <stdlib.h>

void output(int a[], int size)
{
    for( int i=0; i<size; ++i)
    {
        printf("%d\n",a[i]);

    }
    printf("\n");
}

void input(int a[], int size)
{
    for(int i=0; i<size; ++i)
    {
        a[i]=rand();
    }
}

void InsertionSort(int a[], int size)
{
    int temp;
    for (int i=1; i<size; ++i)
    {
        temp=a[i];
        for (int j=i-1; j>=0; --j)
        {
            if (a[j]<temp)
            {
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
