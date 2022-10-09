#include<stdio.h>
char length(char[]);
int main()
{
	int ch[10],t;
	int i,l;
	printf("Enter string ");
	gets(ch);
	l=length(ch);
	printf("The length is %d",l);
return 1;
}
int lenght(char c[])
{
    int l;
    for(l=0;c[l]!='\0';l++);
    return l;
}


