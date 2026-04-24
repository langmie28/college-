#include<stdio.h>
int main()
{
	char word;
	word=getchar();
	if(word>='A'&&word<='Z'){
		word=word+32;
	} else if(word>='a'&&word<='z'){
		word=word-32;
	}
	putchar(word);
	return 0;
}
