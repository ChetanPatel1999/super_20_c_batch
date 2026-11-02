// wap to print greeting like when user
//  press 1 "good morning"
//  press 2 "good afternoon"
//  press 3 "good evening"
//  press 4 "good night"
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); //5
    if (num == 1)
    {
        printf("good morning\n");
    }
    if (num == 2)
    {
        printf("good afternoon\n");
    }
    if (num == 3)
    {
        printf("good evening\n");
    }
    if (num == 4)
    {
        printf("good night\n");
    }
    if (num > 4)
    {
        printf("please enter 1 to 4");
    }
}