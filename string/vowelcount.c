#include<stdio.h>
int main()
{
	char s[50],vowel[12]="aeiouAEIOU";
	int i,j,count=0;
	printf("Enter a string :\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(s[i]==vowel[j])
			{
				count++;
				break;
			}
		}
	}
	printf("%d",count);
}
