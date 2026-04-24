#include<stdio.h>
int main()
{
	double a,b,c,d,e;
	scanf("%lf %lf",&a,&b);
	if(a<500)  c=0.0;
	else if(a<1000)  c=0.95;
	else if(a<2000)  c=0.9;
	else if(a<3000)  c=0.85;
	else  c=0.8;
	printf("%.0f%%\n",c*100);
	d=a*c;
	e=b-d;
	printf("%.2f\n%.2f",d,e);
	return 0;
}
