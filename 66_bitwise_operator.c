// example of bitwise operator
#include <stdio.h>
void main()
{
    int a = -18, b = 2;
    int c;
    // c = a & b;
    // c = a | b;
    // c = a ^ b;
    // c = a << b;
    // c = a >> b;
    c = ~a;
    printf("result = %d", c);
}