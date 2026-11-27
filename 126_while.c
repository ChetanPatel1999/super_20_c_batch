// Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 30)
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
            i=i+5;
        }

        i++;//4
    }
}