#include<stdio.h>
int main()
{
 int a[50],n,i,j,k;
 printf("no.of array elements:");
 scanf("%d",&n);
 printf("enter the values:");
 for(i=0;i<n;i++)
  scanf("%d",&a[50]);
	 j=a[0];
	 for(i=1;i<n;i++)
	  {
		  if(j<a[i])
		  i++;
	  }
	printf("%d",j);
	return 0;
}
