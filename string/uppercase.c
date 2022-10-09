#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i;
	printf("enter string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		str[i]=str[i]+32;
	}
	printf("The uppercase string is: %s",str);
}
