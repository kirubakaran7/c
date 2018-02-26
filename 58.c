#include <stdio.h>
int main()
{
 int temp,a,b;
 printf("enter the numbers:");
 scanf("%d%d",&a,&b);
 temp=temp^a;
 a=a^b;
 b=b^temp;
 printf("swapping of two numbers %d %d",a,b);
 return 0;
}
