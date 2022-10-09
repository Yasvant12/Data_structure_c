#include<stdio.h>
int main()
{
	char str[10];
	printf("enter string");
	scanf("%^[aeiou]",str);
	printf("the string is:%-5.3s",str);
	return 0;
}
