//  Write a program to display multiple of  7 between given range.
#include <stdio.h>
void main()
{
    int i, s, n;
    printf("enter starting range : ");
    scanf("%d", &s); // 10
    printf("enter ending range : ");
    scanf("%d", &n); // 50
    for (i = s; i <= n; i++)//14
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
    }
}