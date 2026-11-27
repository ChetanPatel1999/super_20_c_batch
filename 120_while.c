// wap to print 10 to 1 reverse numbers.
#include <stdio.h>
void main()
{
    int i = 10;
    while (i >= 1)
    {
        printf("%d ", i); // 10 9 8... 1
        i--;              // 0
    }
}