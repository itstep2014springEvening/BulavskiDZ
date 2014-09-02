#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mysearchminmax.h"
const int N=10000;

int main()
{
    int array[N], size;
    printf("Enter array size:");
    scanf("%d", &size);
    srand(time(NULL));
    input(array,size);
    output(array,size);
    searchmin(array,size);
    searchmax(array,size);
    return 0;
}

