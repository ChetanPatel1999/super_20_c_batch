//wap to take two float number from user and dipslay sum.
#include<stdio.h>
void main()
{
    float a,b,c,d;
	printf("  this is float addition app \n");
    printf("<============================>\n");	
    printf("enter a = ");
    scanf("%f",&a);
    printf("enter b = ");
    scanf("%f",&b);
    printf("enter c = ");
    scanf("%f",&c);
    d=a+b+c;
    printf("sum of %.1f and %.1f and %.1f = %.1f",a,b,c,d);
}
