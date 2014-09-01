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

void mergesort(int arr[], int l, int r)
{
    int N=10000;
    int copy[N];
    if (l<r)
    {
        mergesort(arr, l, (l+r)/2);
        mergesort(arr, (l+r)/2+1, r);
        for(int i = l; i<=r; ++i)
        {
             copy[i] = arr[i];
        }
        int i=l, j=l, k=(l+r)/2+1;
        while(j<=(l+r)/2&&k<=r)
        {
            if (copy[j]<copy[k])
            {
                arr[i]=copy[j];
                ++j;
            }
            else
            {
                arr[i]=copy[k];
                ++k;
            }
            ++i;
        }
        while(j<=(l+r)/2)
        {
            arr[i]=copy[j];
            ++j;
            ++i;
        }
        while(k<=r)
        {
            arr[i]=copy[k];
            ++k;
            ++i;
        }
    }
}
