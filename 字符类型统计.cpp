#include<stdio.h>
int main()
{
	char ch;
	int i=0,u=0,d=0,m=0;
	while((ch=getchar())!='\n'){
		if(ch>='a'&&ch<='z') i++;
		else if(ch>='A'&&ch<='Z') u++;
		else if(ch>='0'&&ch<='9') d++;
		else m++;
	}
	printf("小写字母个数%d\n大学字母个数%d\n数字字符个数%d\n其他字符个数%d\n",i,u,d,m);
	return 0;
}
