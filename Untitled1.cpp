#include<stdio.h>
int length(char[]);
int main()
{
	char ch[30];
	int l;
	printf("Enter string");
	gets(ch);
	l=length(ch);
	printf("%d",l);
	return 0;
}
int length(char c[])
{
	int l,i=0;
	for(l=0;c[l]!='\0';l++)
	{
	i++;	
	}
	return i;
	
}
