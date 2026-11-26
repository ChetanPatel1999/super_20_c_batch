//  Wap to check given number in range of 1-20, if number in range than find
// sum of all number between this number to 20, otherwise print out of range.
#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("enter a number : ");
    scanf("%d", &n); // 5
    if (n >= 1 && n <= 20)
    {
        for (i = n; i <= 20; i++)
        {
            sum = sum + i;
        }
        printf("sum of this number to 20 = %d", sum);
    }
    else
    {
        printf("out of range");
    }
}