#include<stdio.h>
int panduan(int year){
	if((year%4==0&&year%100!=0)||(year%400==0)){
		return 1;
	}else
	    return 0;
} 
void jisuan(int year,int day,int *p,int *q){
	int h[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(panduan(year)){
		h[1]=29;
	}
	int count=0,j=0;
	while(day>h[j]){
		day=day-h[j];
		count++;
		j++;
	}
	*p=count+1;
	*q=day;
}
int main(){
	int year,daily,day,month;
	scanf("%d %d",&year,&daily);
	jisuan(year,daily,&month,&day);
	printf("%d-%d-%d",year,month,day);
	return 0;
}
