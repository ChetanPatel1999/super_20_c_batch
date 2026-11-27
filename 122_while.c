// Write a program to display number square 1 to n (given number).
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter num : ");
    scanf("%d", &n); // 20
    while (i <= n)
    {
        printf("sqaure of %d = %d \n", i, i * i );
        i++; // 2
    }
}