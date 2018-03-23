#include<stdio.h>
int main()
{
 char s[10];
 int len,i,num;
 peintf("enter the number");
 scanf("%d",&num);
 printf("enter the word");
 scanf("%s",s);
 len=strlen(s);
 printf("the value is");
 for(i=num;i<=1;i++)
  {
   printf("%c",s[i]);
  }
 return 0;
}
