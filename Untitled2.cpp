#include<stdio.h>
#include<stdlib.h>
int length(char c[]);
int main()
{
	char ch[50],t;
	int i,l;
	printf("Enter string ");
//	gets(ch);
	scanf("%s",ch);
	l=length(ch);
	printf("The length is %d",l);
	return 0;
}
int length(char c[])
{
    int l;
    for(l=0;c[l]!='\0';l++);
    return l;
}



