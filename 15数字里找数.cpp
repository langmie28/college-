#include<stdio.h>
int main()
{
	int a[15];
	int l=0,r=14,mid,t,p=-1;
	for(int i=0;i<15;i++){
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&t);
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==t){
		p=mid+1;
		break;
		}else if(a[mid]>t){
		   l=mid+1;	
		}else{
			r=mid-1;
		}	
	}
		if(p!=-1){
			printf("%d\n",p);
		}else printf("нч\n");
	return 0;
 } 
