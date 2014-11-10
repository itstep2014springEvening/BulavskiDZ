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
int add (int arr_A[], int arr_B[], int arr_C[]);
void freeArray (int array[]);
int sub (int arr_A[], int arr_B[], int arr_C[]);

int main()
{
    int a[maxlen], b[maxlen], c[maxlen];
    char opert;
    freeArray(c);
    printf("Enter biginteger a: ");
    getlong(a);
    printf("Enter biginteger b: ");
    getlong(b);
    printf("Enter operator: ");
    scanf("%c", &opert);
    printf("%d",compere(a,b));
    switch(opert)
    {
    case '+':
        add(a,b,c);
        printlong(c);
        break;
    case '-':
        sub(a,b,c);
        printlong(c);
        break;
    default:
        printf("Net operazii\n");
    }
    return 0;
}

void getlong (int array[maxlen])
{
    freeArray(array);
    char str[maxlen];
    gets(str);
    char str2[maxlen];
    memset(str2, 0, sizeof(str2));
    int p=4;
    int size = strlen(str);
    int r=0;
    while (size>p)
    {
        size-=p;
        for (int i=size, j=0; i<size+p; ++i, ++j)
        {
            str2[j] = str[i];
            str[size]-=p;
        }
        array[r] = atoi(str2);
        ++r;
    }
    if (size)
        array[r] = atoi(str);
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

    if (i==0 && array[i]==0)
        printf("%.4d", array[i]);
    else
        for (int j=i; j>=0; --j)
            printf("%.4d", array[j]);
}

int add (int arr_A[], int arr_B[], int arr_C[])
{
    int i;
    for (i = 0; i<maxlen; ++i)
    {
        arr_C[i] = arr_A[i] + arr_B[i];
        arr_B[i+1]+= arr_C[i]/sys;
        arr_C[i] = arr_C[i] % sys;
    }
    return arr_C[i];
}

int sub (int arr_A[], int arr_B[], int arr_C[])
{
    int i;
    int p=compere(arr_A,arr_B);
    for (i = 0; i<=maxlen; ++i)
    {
        if (p==-1)
            arr_C[i] = arr_B[i] - arr_A[i];
        else
            arr_C[i] = arr_A[i] - arr_B[i];
        if (arr_C[i]<0)
        {
            arr_C[i]+=sys;
            arr_A[i+1]-=1;
        }
    }
    return arr_C[i];
}

void freeArray (int array[])
{
    for (int i=0; i<=maxlen; ++i)
        array[i]=0;
}
