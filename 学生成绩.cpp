#include<stdio.h>
int main()
{
	float student[5]={0}; 
	float scores[5][4];
	int max;
	float temp;
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			scanf("%f",&scores[i][j]);
			student[i]+=scores[i][j];
		}
	} 
	
	
	for(int i=0;i<5;i++){
		student[i]=student[i]/4;
		printf("第%d个学生的平均成绩是:%.2f\n",i+1,student[i]);
	}
	
	
	
	
	for(int i=0;i<5;i++){
		max=i;
		for(int j=i+1;j<5;j++){
			if(student[j]>student[max]){
			   max=j;
		   }
		}
	    temp=student[i];
	    student[i]=student[max];
	    student[max]=temp;
		}
		for(int i=0;i<5;i++){
	printf("%.2f ",student[i]);
	}
	return 0;
}
