#include <stdio.h>
#include <stdlib.h>

void input (int array[], int size)
{
    printf("Enter %d array elements:\n", size);
    for (int i=0; i<size; ++i)
    {
        scanf("%d", &array[i]);
    }
}

void output (int array[], int size)
{
    for (int i=0; i<size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void search (int array[], int size, int n)
{
    for (int i=size; i>=0; --i)
    {
        if (n!=array[size])
        {
            --size;
        }
    }
    if (n==array[size])
    {
        printf("%d", size);
    }
    else
    {
        printf("-1");
    }
}
