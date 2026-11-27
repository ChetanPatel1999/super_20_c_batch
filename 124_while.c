// Write a program to display table of given number.
//  6 X 1 = 6
//  6 X 2 = 12
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num for table : ");
    scanf("%d", &n); // 9
    while (i <= 10)
    {
        printf("%d X %d = %d \n", n, i, n * i);
        i++; // 4
    }
}