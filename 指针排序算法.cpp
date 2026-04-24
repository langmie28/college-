#include<stdio.h>
void paopao(int h[],int n){
	int t;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(h[j]>h[j+1]){
			   t=h[j];
			   h[j]=h[j+1];
			   h[j+1]=t; 
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",h[i]);
	}
} 
int main(){
	int n;
	scanf("%d",&n);
	int h[n];
	for(int i=0;i<n;i++){
		scanf("%d",&h[i]);
    }
    paopao(h,n);
    return 0;
}
