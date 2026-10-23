//wap to take two value from user and display their sum.
#include<stdio.h>
void main()
{
   int num1,num2,sum;
   printf("  this is addition app \n");
   printf("<========================>\n");
   printf("enter num1 = ");
   scanf("%d",&num1);  // 6
   printf("enter num2 = ");
   scanf("%d",&num2); // 8
   sum=num1+num2;
   printf("addition = %d\n",sum); 
   printf("sum of %d and %d = %d",num1,num2,sum); 
   //sum of 6 and 8 = 14
}

