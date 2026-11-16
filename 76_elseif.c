//  Check whether the triangle is equilateral, scalene, or isosceles.
#include <stdio.h>
void main()
{
    int s1, s2, s3;
    printf("enter side1 length : ");
    scanf("%d", &s1);
    printf("enter side2 length : ");
    scanf("%d", &s2);
    printf("enter side3 length : ");
    scanf("%d", &s3);
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1)
    {
        if (s1 == s2 && s2 == s3)
        {
            printf("tringle is equilateral");
        }
        else if (s1 == s2 || s2 == s3 || s3 == s1)
        {
            printf("tringle is isosceles");
        }
        else
        {
            printf("tringle is scalene");
        }
    }
    else
    {
        printf("tringle side is not valid for mmaking tringle ");
    }
}