#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str[20];
	int count=0;
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i+=2)
	  {
	   if(str[i]==str[i+1])
	     {
         count++;
	     }
	   }
   	if(count>0)
	   {
	 	   printf("No");
	    }
	   else
	    {
		    printf("Yes");
	     }
	return 0;
}
