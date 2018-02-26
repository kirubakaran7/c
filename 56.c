#include <stdio.h>
int main(void) 
{
 char str[100];
 scanf("%s",str);
 int alpha=0,digit=0;
 for(int i=0;str[i]!=0;i++)
  {
   if((str[i]>='a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
	   alpha++;
    }
   if(str[i]>='0' && str[i]<='9')
    {
 	   digit++;
    }
  }
 if(alpha>=1 && digit>=1)
 {
	printf("yes");
 }
 else
 {
	printf("no");
 }
return 0;
}
