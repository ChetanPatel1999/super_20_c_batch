// . Write a  program to input electricity unit  and calculate total electricity bill
// according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
#include <stdio.h>
void main()
{
    float unit, totalBill;
    printf("enter unit : ");
    scanf("%f", &unit); // 180
    if (unit > 0 && unit <= 50)
    {
        totalBill = unit * 0.50;
    }
    else if (unit > 50 && unit <= 150)
    {
        totalBill = 50 * 0.50 + (unit - 50) * 0.75;
    }
    else if (unit > 150 && unit <= 250)
    {
        totalBill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    }
    else if (unit > 250)
    {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }
    else
    {
        printf("invalid unit please provide positive value\n");
    }

    totalBill = totalBill + (totalBill * 20) / 100;
    printf("total bill = %.2f", totalBill);
}