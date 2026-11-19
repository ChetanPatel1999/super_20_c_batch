//  Mini Project Task:
// Create a program that simulates entry into a club and ordering food/drinks
// using nested if-else statements.
// Requirements:
// Age Check:
// o Ask the user for their age.
// o If the age is less than 18, display a message: "Sorry, you are not
// allowed to enter the club." and stop the program.
// o If the age is 18 or older, allow them to enter the club.
// Menu Display:
// o Show 2–3 menu items (for example: Pizza, Burger, Cold Drink) with
// their prices.
// Order Process:
// o Allow the user to order only one item by entering its number/name.
// Bill Display:
// o Show the name of the ordered item and its price as the bill.
#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 10
    if (age >= 18)
    {
        printf("<=== welcome to my club ===>\n");
        printf("club menu :\n");
        printf("1. Pizza  120\n");
        printf("2. Burger  80\n");
        printf("3. Cold coffe  100\n");
        printf("select order : ");
        scanf("%d", &order); // 5
        if (order == 1)
        {
            printf("your Pizza is orderd please pay 120 rs\n");
        }
        else if (order == 2)
        {
            printf("your Burger is orderd please pay 80 rs\n");
        }
        else if (order == 3)
        {
            printf("your Cold coffe is orderd please pay 100 rs\n");
        }
        else
        {
            printf("wrong input ! please select 1 to 3 numbers");
        }
    }
    else
    {
        printf("Sorry, you are not allowed to enter the club.");
    }
}