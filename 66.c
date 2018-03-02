#include<stdio.h>
int main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 if(n%n==0&&n%1==0)
  {
	  printf("prime");
  }
  else
  {
	  printf("not a prime");
  }
 return 0;
}
