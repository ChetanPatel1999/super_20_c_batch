// Write a Program to accept user’s marital status, gender and age to check if
// he/she is eligible for marriage or not.
#include <stdio.h>
void main()
{
    int status, gender, age;
    printf("<== welcome make_riste_by_madhur.com ==>\n");
    printf("select your status :\n");
    printf("press 1 for single  \n");
    printf("press 2 for married  \n");
    printf("select  : ");
    scanf("%d", &status);
    switch (status)
    {
    case 1:
        printf("select gender : \n");
        printf("1. male  \n");
        printf("2. female  \n");
        printf("select  : ");
        scanf("%d", &gender);
        switch (gender)
        {
        case 1:
            printf("ok ! you are male so please enter your age : ");
            scanf("%d", &age); // 18
            if (age >= 21)
            {
                printf("you are eligible for marrieg \n");
            }
            else
            {
                printf("you are not eligible for marrieg please try after %d year \n", 21 - age);
            }
            break;
        case 2:
            printf("ok ! you are female so please enter your age : ");
            scanf("%d", &age); // 18
            if (age >= 18)
            {
                printf("you are eligible for marrieg \n");
            }
            else
            {
                printf("you are not eligible for marrieg please try after %d year \n", 21 - age);
            }
            break;
        default:
            printf("invalid input please enter 1 or 2");
        }

        break;
    case 2:
        printf("you are already married , sorry for inconvenience");
        break;
    default:
        printf("invalid input please enter 1 or 2");
    }
}