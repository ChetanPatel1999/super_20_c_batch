//  Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); // 5
    int sum = 0;
    for (i = 1; i <= n; i++) // 2
    {
        sum = sum + i;
    }
    printf("sum of 1 to %d = %d \n", n, sum);
    float average;
    average = sum / (float)n;
    printf("average of 1 to %d = %.2f ", n, average);
}