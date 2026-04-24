#include<stdio.h>
int main()
{
	for(int i=1;i<99;i++){
		int j=i*i;
		if(j<=36){
			if(j%10==i) printf("%d ",i);
		}else{
			if(j%100==i)  printf("%d ",i);
		}
	}
	return 0;
}
