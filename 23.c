#include <stdio.h>
int main()
{
  int array[50], size, i, minimum;
  printf("\n Enter the size of the array: ");
  scanf("%d", &size);
  printf("\n Enter %d elements of  the array: ", size);
  for (i = 0; i < size; i++)
   scanf("%d", &array[i]);
   minimum = array[0];
   for (i = 1; i < size; i++)
    {
       if (minimum < array[i])
       minimum = array[i];
    }
  printf("\n minimum element present in the given array is : %d", minimum);
  return 0;
}
