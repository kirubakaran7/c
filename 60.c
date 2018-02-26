#include<stdio.h>
int main()
{
 int n,f=0,s=1,i,next;
 printf("enter the number");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   if(c<=1)
    {
     next=i;
    }
   else
   {
    next=f+s;
    f=s;
    s=next;
    printf("%d",next);
   }
  return 0;
  }
}
