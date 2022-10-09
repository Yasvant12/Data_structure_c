#include<stdio.h>
#include<string.h>
int main()
{
	
	char str[10];
	int t,i;
	puts("enter string");
	gets(str);
	for(i=0;str[i]!='\0';i++);
	t=i;
	printf("%d",t);
}
