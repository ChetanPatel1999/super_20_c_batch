//  Write a program to accept two number from user and display greatest number.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a :");
    scanf("%d", &a); // 90
    printf("enter value of b :");
    scanf("%d", &b); // 188
    a > b ? printf("gretest num = %d", a) : printf("gretest num = %d", b); 
}