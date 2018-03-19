#include<stdio.h>
int main()
{
 int n,i,a=0;
 printf("enter the num");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
    {
     a=1;
     break;
    }
   if(a==0)
    {
     printf("prime\n");
     n++;
    }
    else
    {
     printf("no\n");
    }
  }
return 0;
}
