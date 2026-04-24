#include<stdio.h>
#include<math.h> 
int main()
{
    double a,b,c,d,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0){
		printf("不是一元二次方程\n"); 
	}else{
		d=b*b-4*a*c;
		if(d==0){
			x1=x2=(-b)/2*a;
			printf("x1=%.1f,x2=%.1f",x1,x2);
		}else if(d>0){
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
		}else 
		      printf("无实根");
	}
	return 0;	
}
