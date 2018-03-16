#include<stdio.h>
int main()
{
 int l,b,h,sa,vol;
 printf("enter values\n");
 scanf("%d%d%d\n",&l,&b,&h);
 vol=l*b*h;
 sa=2*l*b+2*b*h+2*h*l;
 printf("%d %d\n",vol,sa);
 return 0;
}
