#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 7 == 7 &&  345>90;
    // res = 12 > 77 || 76 == 7;
    // res = !(12 > 9);
    // res = !(12 > 7 && 5 == 7);
    res = !(12 > 7 && !(5 == 7));
    printf("result = %d", res);
}