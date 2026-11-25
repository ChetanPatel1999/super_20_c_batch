//  Write a program to check given number is perfact or not.
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 28
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n * 2)
    {
        printf("perfact number");
    }
    else
    {
        printf("not perfact number");
    }
}