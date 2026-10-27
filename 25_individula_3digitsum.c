// . Write a program to find sum of individuals digits of any three digits
// number.
#include <stdio.h>
void main()
{
    int r, s, t, num, sum;
    printf("enter a 3 digit number = ");
    scanf("%d", &num); //463
    r = num / 100;
    s = (num / 10) % 10;
    t = num % 10;
    sum=r+s+t;
    printf("sum of individual digit = %d",sum);

}
