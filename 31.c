#include <stdio.h>
void main() 
{
         int i,count=0;
         char a[50];
         printf("\nEnter string");
         gets(a);
         for(i=0;a[i]!=0;i++)
         {
         	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
         	count++;         	
         }
         printf("%d",count);
}
