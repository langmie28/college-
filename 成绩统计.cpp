#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int count=0,joker=0;
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]>=90){
			count++;
		}
		if(a[i]<60){
			joker++;
		}
	}
	printf("优秀学生人数为%d\n不及格学生为%d\n",count,joker);
	return 0;
}
