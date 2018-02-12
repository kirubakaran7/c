#include<stdio.h>
void swap(int x,int y)
{
 int temp=x;
 x=y;
 y=temp;
}
 int main()
{
 int x,y;
 printf("enter x:");
 scanf("%d",&x);
 printf("enter y:");
 scanf("%d",&y);
 swap(&x,&y);
 printf("after swapping x=%d and y=%d",x,y);
 return 0;
}
