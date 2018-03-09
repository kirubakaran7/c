#include<stdio.h>
void main()
{
 char s[20];
 int i,n;
 printf("please enter a string");
 scanf("%c",&s);
 n=strlen(s);
 for(i=0;i<n;i++)
  {
   if(i%2==0)
    {
     printf("%c",s[i]);
    }
  }
 for(i=0;i<n;i++)
   {
    if(i%2!=0)
      {
       printf("%c",s[i]);
      }
   }
 }     
