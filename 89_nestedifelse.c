// Wap to find greatest number among has given three numbers without
// using (&&)  logical and operator.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter value of a : ");
    scanf("%d", &a); // 78
    printf("enter value of b : ");
    scanf("%d", &b); // 89
    printf("enter value of c : ");
    scanf("%d", &c); // 99
    if (a > b)
    {
        if (a > c)
        {
            printf("gretest num = %d", a);
        }
        else
        {
            printf("gretest num = %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("gretest num = %d", b);
        }
        else
        {
            printf("gretest num = %d", c);
        }
    }
}