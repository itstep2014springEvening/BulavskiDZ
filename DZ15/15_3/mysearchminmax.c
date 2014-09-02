#include <stdio.h>
#include <stdlib.h>

void input (int *array, int size)
{
    for (int i=0; i<size; ++i)
    {
        array[i]=rand();
    }
}

void output (int *array, int size)
{
    for (int i=0; i<size; ++i)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
}

void searchmin (int array[], int size)
{
    int min;
    for (int i=0; i<size; ++i)
    {
        min=i;
        for (int j=0; j<size; ++j)
        {
            if (array[j]<array[min])
            {
                min=j;
            }
        }
    }
    printf("min = %d\n", array[min]);
}

void searchmax (int array[], int size)
{
    int max;
    for (int i=0; i<size; ++i)
    {
        max=i;
        for (int j=0; j<size; ++j)
        {
            if (array[j]>array[max])
            {
                max=j;
            }
        }
    }
    printf("max = %d\n", array[max]);
}
