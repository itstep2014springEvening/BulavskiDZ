#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double h;
    double r;
    double p=3.14;
    double l;//образующая конуса;
    double v;
    double s1;//площадь боковой поверхности;
    double s2;//полная площадь;
    printf("Enter a height h:\n");
    scanf("%lf", &h);
    printf("Enter radius r:\n");
    scanf("%lf", &r);
    printf("___________\n");
    double a;//квадрат радиуса;
    double b;//квадрат высоты;
    a=r*r;
    b=h*h;
    l=a+b;
    l=sqrt(l);
    v=(p*r*r*h)/3;
    printf("V  = %.3f\n", v);
    s1=p*r*l;
    printf("S1 = %.3f\n", s1);
    s2=p*r*(r+l);
    printf("S2 = %.3f\n", s2);
    return 0;
}
