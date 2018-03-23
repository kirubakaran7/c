#include<stdio.h>
int main()
{
 int n,a;
 printf("enter the number:");
 scanf("%d",&n);
 if(n%2==0)
  {
   a=n/2;
   printf("%d",a);
  }
  else
   {
    printf("%d",n);
   }
 return 0;
}
