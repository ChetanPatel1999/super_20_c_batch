// Write a program to accept a number from user and print if it is multiple of 7 .
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num = ");
    scanf("%d", &num);//14
    num % 7 == 0 ? printf("multiple of 7") : printf("not multiple of 7");
}