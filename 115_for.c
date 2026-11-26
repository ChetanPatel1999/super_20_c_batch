// 36. Write a program to find the sum of the series [1 +11 + 111 + 1111 + .. n ]
// terms.
// 1  11  111   1111   11111
#include <stdio.h>
void main()
{
    int n, i, val = 1, add = 10, sum = 0;
    printf("enter how many element you want to print : ");
    scanf("%d", &n); // 5
    for (i = 1; i <= n; i++)
    {
        printf("%d ", val); // 1  11  111
        sum = sum + val;
        val = val + add; // 1111
        add = add * 10;  // 10000
    }
    printf("\nserise sum = %d",sum);
}