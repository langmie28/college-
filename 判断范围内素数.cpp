#include<stdio.h>
void panduan(int a,int b,int *p){
	for(int n=a;n<b;n++){
		if(n==2){
			*p=2;
			p++;
			continue; 
		}
		if(n<2){
			continue;
		}
		int is=1;
	
		for(int i=3;i<n;i++){
			if(n%i==0){
				is=0;
				break;
			}
		}
		if(is){
	    *p=n;
		p++;
	  }
	}
	*p=0;
}
int main()
{
	int *p;
	int d[100];
	p=&d[0];
	int a,b;
	scanf("%d %d",&a,&b);
	panduan(a,b,p);
	for(int i=0;d[i]!=0;i++){
		printf("%d",d[i]);
	}
   return 0;
}
	
