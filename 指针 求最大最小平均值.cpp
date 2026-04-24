#include<stdio.h>
void xunzhao(int h[],int *p,int *q,int *t,int n){
	int max=0;
	int min=0;
	int sum=0;
	for(int i=0;i<n;i++){
		if(max<h[i]){
			max=h[i];
		}
		if(min>h[i]){
			min=h[i];
		}
		sum=sum+h[i];
	}
	*p=max;
	*q=min;
	*t=(sum/n);
	
} 

int main(){
	int n;
	int max,min,average;
	scanf("%d",&n);
	int h[n];
	for(int i=0;i<n;i++){
		scanf("%d",&h[i]);
	}
	xunzhao(h,&max,&min,&average,n);
	printf("max=%d\nmin=%d\naverage=%d\n",max,min,average);
	return 0;
}
