// Write a program to convert upper char to lower char.
#include<stdio.h>
void main()
{
	char character;
	printf("enter a upper char = ");
	scanf("%c",&character); //B
	printf("upper char = %c\n",character);
	character = character+32;
	printf("lower char = %c\n",character);
}
