// Write a program to accept a number and check it is less then 500 or greater then
// 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a number = ");
    scanf("%d", &num); // 400
    num > 500 ? printf("num is greater then 500") : printf("num is less then 500");
}