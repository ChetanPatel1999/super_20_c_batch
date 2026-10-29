#include <stdio.h>
void main()
{
    const int passing_marks = 33;
    float radius, area;
    const float pi = 3.141;
    printf("enter radius = ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("area of circle = %.2f", area);
}