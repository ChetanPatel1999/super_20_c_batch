// Write a program to print any three digit number in reverse order.
#include <stdio.h>
void main()
{
    int n, r, s, t, rev;
    printf("enter a 3 digit number = ");
    scanf("%d", &n); // 786
    r = n / 100;
    s = (n / 10) % 10;
    t = n % 10;
    rev = t * 100 + s * 10 + r;
    printf("reverse number = %d",rev);
}
