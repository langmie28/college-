#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a-b<c)
     {
      if(a*a==(b*b+c*c)||c*c==(a*a+b*b)||(a*a+c*c)==b*b)
           printf("Right-angled triangle");
       else if(a==b==c)
           printf("Equilateral triangle");
        else if(a==b||a==c||b==c)
           printf("Isosceles triangle");
         else 
           printf("General triangle");
     }
    else  printf("Not triangle");
    
	return 0;
	
 } 
 
