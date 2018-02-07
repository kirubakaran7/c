#include<stdio.h>
#include<string.h>
void main()
{
	int i,word=0,b;
	char a[100];
	printf("\nEnter the word");
	gets(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]==' ')
		{
			word++;
		}
	}
	printf("\nNumber of words:%d",word);
}
