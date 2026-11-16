// Write a program to take 2 digit number  or 3 digit number or 4 digit number from
//  user and print its reverse number and print sum of individual digit of that number
//  and if number is not two digit or 3 digit or 4 digit so print "please enter 2 or 3 or 4
//  digit number".
#include <stdio.h>
void main()
{
    int num, r, s, t, u, sum, rev;
    printf("enter a num 2,3 or 4 digit only : ");
    scanf("%d", &num); // 347
    if (num > 9 && num < 100)
    {
        r = num / 10;
        s = num % 10;
        sum = r + s;
        rev = s * 10 + r;
        printf("individual digit sum = %d\n", sum);
        printf("reverse number  = %d\n", rev);
    }
    else if (num > 99 && num < 1000) // 567
    {
        r = num / 100;
        s = (num / 10) % 10;
        t = num % 10;
        sum = r + s + t;
        rev = t * 100 + s * 10 + r;
        printf("individual digit sum = %d\n", sum);
        printf("reverse number  = %d\n", rev);
    }
    else if (num > 999 && num < 10000) // 5679
    {
        r = num / 1000; 
        s = (num / 100) % 10;
        t = (num / 10) % 10;
        u = num % 10;
        sum = r + s + t + u;
        rev = u * 1000 + t * 100 + s * 10 + r;
        printf("individual digit sum = %d\n", sum);
        printf("reverse number  = %d\n", rev);
    }
    else
    {
        printf("please enter 2,3 or 4 digit number only");
    }

}