// Write a program to accept a number and check it is less then 500 or greater then
// 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num :");
    scanf("%d", &num); // 600
    if (num > 500)
    {
        printf("num is greater then 500");
    }
    else
    {
        printf("num is less then 500");
    }
}