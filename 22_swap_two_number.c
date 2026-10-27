//. Write a program to swap any two numbers using third variable. 
#include<stdio.h>
void main()
{
	int a,b,c;
    printf("enter value of a = ");
    scanf("%d",&a);
    printf("enter value of b = ");
    scanf("%d",&b);
	printf("before swapping :\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	
	//logic of swapping
    c= a;
    a=b;
    b= c;
	
	printf("after swapping :\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	 
}
