#include <stdio.h>
#include <stdlib.h>
#include <string.h>



const int maxlen = 100;
int base = 10000;


//void getlong (BigInteger array[maxlen]);*/

int main()
{
    char str[120];
    gets(str);
    char str2[120];
    memset(str2,0, sizeof(str2));
    int p=4;
    int size = strlen(str);
    int array[maxlen];
    memset(array,0, sizeof(array));
    while (size>0)
    {
        int r=0;
        ++r;
        size-=p;
        for (int i=size, j=0; j<size, i<size+p; ++i, ++j)
        {
            str2[j] = str[i];

        }
        array[r] = atoi(str2);
        printf("%d\n", array[r]);
    }
    return 0;
}

/*void getlong (BigInteger array[maxlen])
{
   memset(array,0,sizeof(array));
   char str;
   getc(str);
   int i=0, znak=4;
   char shag;
   while()
   shag  = str/znak;
   strcpy(str,array[i]);
}*/

