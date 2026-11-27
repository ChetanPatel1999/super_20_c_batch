//Write a program to display table of given number. 
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter a num for table : ");
    scanf("%d", &n); //9
    while (i <= 10)
    {
        printf("%d \n", n * i);
        i++; // 4
    }
}