// Write a program to display even number series.
#include <stdio.h>
void main()
{
    int i = 1,n;
    printf("enter a num : ");
    scanf("%d",&n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);// 3 6 9 12 15 18
        }
        i++;//5
    }
}