#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int d[]={3,5,7};
	int r[3]={0};
	int count=0;
	
	for(int i=0;i<3;i++){
		if(n%d[i]==0){
			r[i]=1;
			count++;
		}
	} 
	
	if(count==0){
		printf("n");
	}else{
		int first =1;
		for(int i=0;i<3;i++){
			if(r[i]){
				if(!first){
					printf(" "); 
				}
				printf("%d",d[i]);
				first=0;
			}
			
		}
		printf("\n");
	}
	return 0;
}
