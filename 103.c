#include<stdio.h>
void main()
{
  char ch[100];
  int i;
  printf("enter charcter");
  scanf("%[^\n]s",&ch);
  ch[0]=toupper(ch[0]);
  for(i=0;ch[i]!='/0';i++)
   {
     if(ch[i]==' ')
      {
        ch[i+1]=toupper(ch[i+1]);
      }
   }
  printf("%s",ch);
  }
