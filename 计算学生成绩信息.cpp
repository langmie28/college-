#include<stdio.h>
struct student{
	long long id;
	char name[21];
	int score[3];
};
int main(){
	struct student s1,s2;
	int sum1=0,sum2=0;
	int i;
	scanf("%lld %s %d %d %d",&s1.id,s1.name,&s1.score[0],&s1.score[1],&s1.score[2]);
	scanf("%lld %s %d %d %d",&s2.id,s2.name,&s2.score[0],&s2.score[1],&s2.score[2]);
	for(i=0;i<3;i++){
		sum2+=s2.score[i];
	}
}
