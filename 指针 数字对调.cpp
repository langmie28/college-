#include<stdio.h>
void duidiao(int a,int b){
	int t=0;
	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d",a,b);
} 
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	duidiao(a,b);
	return 0;
}
