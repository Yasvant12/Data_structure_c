#include<stdio.h>
int main()
{
	char s[100];
	int i,j,l;
	printf("Enter the string:\n");
	gets(s);
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		if(s[i]!=s[l-1-i])
		{
		printf("not palindrom");
		break;
     	}
	}
	if(i==l/2)
	printf("palindrom:\n");
}
