#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    if(a<=3) b=6.0;
    else b=6+(a-3)*1.5;
    printf("%.2f",b);
}
