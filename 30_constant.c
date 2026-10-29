#include <stdio.h>
void main()
{
    int age = 34;  // 34 is constant or integer literls
    float h = 3.6; // 3.6 is constant or float literls

    const int marks = 50;
    printf("marks = %d\n", marks);
    // marks = 70;  //we can not change value of constant varible
    printf("marks = %d\n", marks);
}