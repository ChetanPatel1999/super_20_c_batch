// Write a program to display number square 1 to n (given number). 
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter ending number : ");
    scanf("%d", &n); //4

    for (i = 1; i <= n; i++) //2
    {
        printf("square of %d = %d \n", i, i * i);
    }
}