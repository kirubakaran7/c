#include<stdio.h>
int main()
{
 int a=0,b=1,c=0,n,i;
 printf("enter the number");
 scanf("%d",n);
 for(i=0;i<n;i++)
 {
  a=b;
  b=c;
  c=a+b;
 }
}
