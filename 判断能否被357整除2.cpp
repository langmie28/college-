#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	
	int d3=n%3==0;
	int d5=n%5==0;
	int d7=n%7==0; 
	count =d3+d5+d7;
	if(count==0){
		printf("n");
	}else if(count==3){
		printf("3 5 7");
	}else if(count==2){
		if(d3&&d5) printf("3 5");
		else if(d3&&d7) printf("3 7");
		else printf("5 7");
	}else{
		if(d3) printf("3");
		else if(d5) printf("5");
		else printf("7");
	}
	return 0;
}
