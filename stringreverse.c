#include<stdio.h>
int main()
{
	char s[50],ch;
	int i,l;
	printf("Enter a string :\n");
	gets(s);
	//for(i=0;ch)
	l=strlen(s);
	for(i=0;i<=l/2;i++){
	ch=s[i];
	s[i]=s[l-1-i];
	s[l-1-i]=ch;
}
printf("Reverse string is: %s",s);
}
