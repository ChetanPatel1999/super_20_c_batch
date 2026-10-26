//. Write a program to swap any two numbers without using third variable. 
#include<stdio.h>
void main()
{
	int a,b;
    printf("enter value of a = ");
    scanf("%d",&a);
    printf("enter value of b = ");
    scanf("%d",&b);
	printf("before swapping :\n");
	printf("a = %d\n",a); //12
	printf("b = %d\n",b); //5
	
    // logic of swapping
    //   a= a+b;
   //    b= a-b;
   //    a= a-b;


     a=a*b;
     b=a/b;
     a=a/b;
	
	printf("after swapping :\n");
	printf("a = %d\n",a);// 5
	printf("b = %d\n",b);// 12
	 
}
