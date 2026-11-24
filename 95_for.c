// Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); // 5
    for (i = 1; i <= n; i++)
    {
        printf("%d  ", i);
    }
}