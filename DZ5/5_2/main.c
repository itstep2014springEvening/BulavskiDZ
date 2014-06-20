#include <stdio.h>
#include <stdlib.h>

int main()
{
   for (int i=0; i<128; ++i)
   {
       printf("%4d - ", i);
       if (i==10)
       {
           printf(" \\n");
       }
       else
       {
           printf("%3c", i);
       }
       if (5==i%6)
       {
           printf("\n");
       }
   }

    return 0;
}
