//  Write a program to display number between given range
#include <stdio.h>
void main()
{
    int i, s, n;
    printf("enter starting range : ");
    scanf("%d", &s); // 10
    printf("enter ending range : ");
    scanf("%d", &n); // 50
    for (i = s; i <= n; i++)
    {
        printf("%d ", i);
    }
}