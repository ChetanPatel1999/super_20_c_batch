//  Write a  program that accepts two item's weight and number of
// purchases and calculates their Weight average value.
#include <stdio.h>
void main()
{
    int w1, w2, t1, t2;
    float average_weight;
    w1 = 5; // weight of first item
    w2 = 8; // weight of second item
    t1 = 6; // number of first item purchased
    t2 = 3; // number of second item purchased

    average_weight = ((w1 * t1) + (w2 * t2)) / (float)(t1 + t2);
    printf("Average weight: %.2f\n", average_weight);
}