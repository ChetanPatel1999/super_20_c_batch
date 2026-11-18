//  Write a program using switch-case to print your friend's name based on the
// first letter of their name.
#include <stdio.h>
void main()
{
    char first_letter;
    printf("enter first letter of your friend name :  ");
    scanf("%c",&first_letter);//z
    switch(first_letter)
    {
        case 'd': printf("devendra rathor");break;
        case 'a': printf("arbaj patel");break;
        case 'm': printf("madhur patel,manoj kumar");break;
        case 'g': printf("gulshan nagpure");break;
        case 'y': printf("yash sahu");break;
        case 'k': printf("krishna prajapat");break;
        default: printf("you have not friend which name start with %c",first_letter);

    }
}