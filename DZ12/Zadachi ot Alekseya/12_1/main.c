#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, a=0,b, fa, fb, fm, m;
    printf("Vvedite x:");
    scanf("%d", &x);
    b=x;
    fa=a*a;
    fa-=x;
    fb=b*b;
    fb-=x;
    while (fm!=0)
    {
        m=(a+b)/2;
        fm=m*m;
        fm-=x;
        if (fm==0)
        {
            printf("Otvet: %d", m);
        }
        if (fa*fm<0)
        {
            fb=fm;
            b=m;
        }
        else
        {
            fa=fm;
            a=m;
        }
    }
    return 0;
}
