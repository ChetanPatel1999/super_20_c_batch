// Write a program to accept two integers and check whether they are equal or not.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a :");
    scanf("%d", &a);
    printf("enter value of b :");
    scanf("%d", &b);
    if (a == b)
    {
        printf("nums are same");
    }
    else
    {
        printf("nums are different");
    }
}