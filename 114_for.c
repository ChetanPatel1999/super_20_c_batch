// 38. Write a program to display the series [ 4,9,19,34,54..... n] terms.
// #include <stdio.h>
// void main()
// {
//     int i, val = 4, n;
//     printf("enter how many element you want to print : ");
//     scanf("%d",&n);
//     for (i = 1; i <= n; i++)
//     {
//         printf("%d ", val);
//         val = val + 5 * i;
//     }
// }

#include <stdio.h>
void main()
{
    int i, val = 4, n, add = 5, sum = 0;
    printf("enter how many element you want to print : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // 2
    {
        printf("%d ", val); // 4 9 19
        sum = sum + val;
        val = val + add; // 34
        add = add + 5;   // 20
    }

    printf("sum of this serise = %d", sum);
}