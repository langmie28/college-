#include<stdio.h>
int main()
{
	int a,b;
	int c=0;
	
	scanf("%d%d",&a,&b);
	for(int n=a;n<=b;n++){
		int s=0;
		for(int i=1;i<n;i++){
			if(n%i==0){
				s=s+i;
			}
		}
		if(s==n){
			printf("%d\n",n);
			c++;
		}
		   
	}
	if(c==0) printf("нч");
	return 0;
}
