#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "myhod.h"

int main()
{
    int a,Player1,Player2,CPU1, CPU2;
    while (a!=0)
    {
        printf("\t\tSTART!\n\n");
        printf("\t\tVASH HOD!\n\n");
        sbros();
        srand (time(NULL) );
        a = rand()%6+1;
        hod(a);
        Player1=a;
        a=rand()%6+1;
        hod(a);
        Player2=a;
        printf("SUMMA %d\n\n",Player1+Player2);
        sbros();
        printf("\t\tHOD SOPERNIKA!\n\n");
        sbros();
        a = rand()%6+1;
        hod(a);
        CPU1=a;
        a = rand()%6+1;
        hod(a);
        CPU2=a;
        printf("SUMMA %d\n\n",CPU1+CPU2);
        sbros();
        if(Player1+Player2>CPU1+CPU2)
        {
            printf("\t\tWINNER\n\n");
        }
        if (Player1+Player2==CPU1+CPU2)
        {
            printf("\t\tDRAW\n\n");
        }
        if (Player1+Player2<CPU1+CPU2)
        {
            printf("\t\tLOSER\n\n");
        }
        sbros();
    }
    return 0;
}
