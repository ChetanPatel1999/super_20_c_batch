//  Write a program to check how many number is divisible by 3,4 & 8 in
// between 21-121.
#include <stdio.h>
void main()
{
    int i, c = 0;
    for (i = 21; i < 121; i++)
    {
        if (i % 3 == 0 && i % 8 == 0 && i % 4 == 0)
        {
            c++;
            printf("%d ", i);
        }
    }
    printf("\ntotal numbers count = %d", c);
}