#include<stdio.h>
#include<math.h>
void main()
{
   float p,r,tot,res;
   int t;
   printf("Enter p,r,t");
   scanf("%f %f %d",&p,&r,&t);
   tot=p*r*t;
   res=tot/100;
   printf("%d",floor(res));   
}
