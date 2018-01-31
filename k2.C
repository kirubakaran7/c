#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int yr;
	printf("Enter year :");
	scanf("%d",&yr);
	if(yr%100!=0)
	{
		printf("This is a Leap Year");
	}
	else if(yr%100==0)
	{
		printf("This is not a Leap Year");
	}
	getch();
}
