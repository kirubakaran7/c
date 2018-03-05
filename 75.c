#include<stdio.h>
#include<string.h>
void main()
{
 int l;
 char str[30];
 printf("\n enter the string");
 scanf("%s",str);
 l=strlen(str);
 if(l%2==0)
 {
  str[l/2]='*';
  str[l/2-1]='*';
 }
  else
 {
  str[l/2]='*';
 }
printf("%s",str);
getch();
}
