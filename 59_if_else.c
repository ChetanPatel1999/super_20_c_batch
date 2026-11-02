// Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a : ");
    scanf("%d", &a);
    printf("enter value of b : ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("greates num = %d", a);
    }
    else
    {
        printf("greates num = %d", b);
    }
}