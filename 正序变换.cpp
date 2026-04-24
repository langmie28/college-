#include<stdio.h>
int main(){
	int n,t;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n/2;i++){
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
    }
    return 0;
}
