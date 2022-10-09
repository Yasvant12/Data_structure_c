#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("Enter string:\n");
	scanf("%s",str);
//	gets(str);
	printf("%s",strrev(str));
}
