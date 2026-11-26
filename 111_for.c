// . Write a program to check how many numbers is even & odd between 77
// 165.
#include <stdio.h>
void main()
{
    int i, even = 0, odd = 0;
    for (i = 68; i < 165; i++)
    {
        if (i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("total even num count = %d\n",even);
    printf("total odd num count = %d\n",odd);
}