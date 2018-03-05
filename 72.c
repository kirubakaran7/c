#include<stdio.h>
#include<conio.h>
int main()
{
 char ch;
 clrscr();
 printf("enter any character");
 scanf("%c",&ch);
 switch(ch)
 {
 case 'a';
 case 'A';
 case 'e';
 case 'E';
 case 'i';
 case 'I';
 case 'o';
 case 'O';
 case 'u';
 case 'U';
 printf("?n %< is vowel",ch);
 break;
 default;
 printf("/n %c is not a vowel.",ch);
 break;
 }
getch();
return 0;
}
