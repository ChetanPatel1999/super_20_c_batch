// Write a program to display table of given number. 
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter table number : ");
    scanf("%d", &n);//15
    for (i = 1; i <= 10; i++) // 3
    {
        printf("%d \n", n * i);
    }
}