#include<stdio.h>
int main()
{
char c[20];
int n,i;
printf("enter the character:");
for(i=0;i<=10;i++)
scanf("%c",&c[i]);
printf("enter no.of letters to be printed:");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
	 printf("%c",c[i]);
 }
return 0;
}
