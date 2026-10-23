// Write a program to calculate area of rectangle.
#include<stdio.h>
void main()
{
	float length,width,area;
	printf("enter length of rectangle = ");
	scanf("%f",&length);
	printf("enter width of rectangle = ");
	scanf("%f",&width);
	area=length*width;
	printf("area of rectangle = %.2f",area);
	
}
