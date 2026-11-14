// Write a program to find greatest number among has given three numbers.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter value of a : ");
    scanf("%d", &a); // 78
    printf("enter value of b : ");
    scanf("%d", &b); // 455
    printf("enter value of c : ");
    scanf("%d", &c); // 99
    if (a > b && a > c)
    {
        printf("greatest num = %d", a);
    }
    else if (b > c)
    {
        printf("greatest num = %d", b);
    }
    else
    {
        printf("greatest num = %d", c);
    }
}