#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
	char s[80];
	int n;
	char t;
	scanf("%s",s);
	n=strlen(s);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i]<s[j]){
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("%s",s);
	return 0;
}
