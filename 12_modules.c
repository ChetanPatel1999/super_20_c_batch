//wap to take two value from user and display their modules/reminder.
#include<stdio.h>
void main()
{
   int num1,num2,res;
   printf("enter num1 = ");
   scanf("%d",&num1);  // 4
   printf("enter num2 = ");
   scanf("%d",&num2); // 7
   res=num1%num2;
   printf("modules = %d\n",res); 
}

