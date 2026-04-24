#include<stdio.h>
int main()
{
	double eps,item,sum=0.0;
	int term=1,sign=1;
	scanf("%lf",&eps);
	do{
		item=sign*1.0/term;
		sum+=item;
		sign=-sign;
		term+=2;
		}while(1.0/term>eps);
		printf("%.4lf",sum*4);
		return 0;
}
