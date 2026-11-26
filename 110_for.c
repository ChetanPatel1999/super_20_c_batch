// Calculate power of a number without using pow().
#include <stdio.h>
void main()
{
    int n, p, i, res = 1;
    printf("enter a number : ");
    scanf("%d", &n); // 5
    printf("enter power : ");
    scanf("%d", &p); // 4
    for (i = 1; i <= p; i++)
    {
        res = res * n;
    }
    printf("power result = %d", res);
}