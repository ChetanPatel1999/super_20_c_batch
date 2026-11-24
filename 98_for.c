// Write a program to display table of given number.
// 4 x 1 = 4
// 4 X 2 = 8
// 4 X 3 = 12
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter table number : ");
    scanf("%d", &n);          // 4
    for (i = 1; i <= 10; i++) // 2
    {
        printf("%d X %d = %d \n", n, i, n * i);
    }
}