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

void BubbleSort(int a[], int size)
{
    int temp;
    for (int i=size-1; i>=0; --i)
    {
        for (int j=0; j<i; ++j)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
