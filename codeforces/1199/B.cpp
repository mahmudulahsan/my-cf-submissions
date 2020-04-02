#include<stdio.h>
int main()
{
    double l, h;

    scanf("%lf %lf",&h,&l);

    double x;

    x=((l*l)-(h*h))/(2*h);

    printf("%0.12lf\n",x);

}