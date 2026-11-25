//   Write a program to display sum 1 to n  ( given number) only even numbers
// sum.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); // 20
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum of 1 to %d only even numbers = %d ", n, sum);
}