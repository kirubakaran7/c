#include<stdio.h>
int main(0
{
 int n,av,i,sum=0;
 int a[20];
 printf("enter the number");
 scanf("%d",&n);
  for(i=0;i<n;i++);
   {
     scanf("%d",&a[i]);
   }
  for(i=0;i<n;i++)
   {
    sum=sum+a[i];
    av=sum/n;
    printf("the average of the given number is%d",av);
   }
return 0;
}
