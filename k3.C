		
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	{
		printf("%c it is an alphabet",ch);
	}
	else
	{
		printf("%c it is not an alphabet",ch);
	}
	getch();
}
