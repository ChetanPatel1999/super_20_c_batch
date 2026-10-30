// wap to check given number is postive or nagative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num = ");
    scanf("%d", &num); // -34
    num >= 0 ? printf("num is positive") : printf("num is nagative");
}