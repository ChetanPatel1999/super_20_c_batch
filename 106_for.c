// Write a program to display factors count of given number.z
#include <stdio.h>
void main()
{
    int i, n, c = 0;
    printf("enter a num : ");
    scanf("%d", &n); // 12
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c = c + 1; // r++;
        }
    }
    printf("factors count = %d", c);
}