#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);
    printf("enter c = ");
    scanf("%d", &c);

    printf("before swapping : \n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);

    // logic for swapping
    // d = a;
    // a = b;
    // b = c;
    // c = d;

    // d = a;
    // a = c;
    // c = b;
    // b = d;

    // without fourth variable
    a = a + b + c;
    c = a - (b + c);
    b = a - (b + c);
    a = a - (b + c);

    printf("after  swapping : \n");
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);
}