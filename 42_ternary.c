//wap to take two integr value from user and check both value are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);
    a == b ? printf("both value are same") : printf("both value are different");
}