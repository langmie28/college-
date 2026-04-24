#include<stdio.h>
int main()
{
	long long num;
	scanf("lld",&num);
	
	if(num==0){
		printf("0");
		return 0;
	} 
	
	while(num>0){
		printf("%lld ",num % 10);
		num/=10;
	}
	return 0;
}
