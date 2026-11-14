// Write a program to accept a number and check if it is positive , nagative or zero.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num); // 34
    if (num == 0)
    {
        printf("num is zero");
    }
    else if (num < 0)
    {
        printf("num is nagative");
    }
    else
    {
        printf("num is positive");
    }
}