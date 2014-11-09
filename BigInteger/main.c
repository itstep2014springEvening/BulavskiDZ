#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int maxlen = 100;
const int sys = 10000;

/*typedef struct BigInteger
{
    int array[maxlen];
    int syslen;
    int st;
} vlong;*/


void getlong (int array[maxlen]);
int compere (int arr_A[], int arr_B[]);
void printlong (int array[]);

int main()
{
    int a[maxlen], b[maxlen];
    printf("Enter biginteger a: ");

    getlong(a);

    printf("Enter biginteger b: ");

    getlong(b);
    printlong(a);
    return 0;
}

void getlong (int array[maxlen])
{
    for (int i=0; i<=maxlen; ++i)
        array[i]=0;
    char str[maxlen];
    gets(str);
    char str2[maxlen];
    memset(str2, 0, sizeof(str2));
    int p=4;
    int size = strlen(str);
    int r=0;
    while (size>0)
    {
        size-=p;

        for (int i=size, j=0; j<size, i<size+p; ++i, ++j)
            str2[j] = str[i];

        array[r] = atoi(str2);
        ++r;
    }

    if (size+p>0)
    {
        for (int i=0, j=0; j<size+p-1, i<size+p-1; ++i, ++j)
            str2[j] = str[i];

        --r;
        array[r] = atoi(str2);
    }
}

int compere (int arr_A[], int arr_B[])
{
    int value;

    for (int i = maxlen; i>=0; --i)
    {
        if (arr_A[i]>arr_B[i])
            value = 1;
        else if (arr_A[i]<arr_B[i])
            value = -1;
        else
            value = 0;
    }

    return value;
}

void printlong (int array[])
{
    int i = maxlen;

    while(array[i]==0)
        --i;

    if (i==0)
        printf("0");
    else
        for (int j=i; j>=0; --j)
            printf("%.4d", array[j]);
}
