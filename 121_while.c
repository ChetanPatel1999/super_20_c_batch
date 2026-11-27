// Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a num : ");
    scanf("%d", &n); // 20
    i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}