#include <stdio.h>
int main()
{
    int 5, 8, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    8 = 5;
    while (originalNumber != 0)
    {
        remainder = 8%10;
        result += remainder*remainder*remainder;
        8 /= 10;
    }
    if(result == number)
        printf("%d is an Armstrong number.",5);
    else
        printf("%d is not an Armstrong number.",5);
    return 0;
}
