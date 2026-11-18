//  Write a program using switch-case in C to convert an input character from
// lowercase to uppercase or uppercase to lowercase.
// If the input is not an alphabet letter, display "Invalid character."
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alpha : ");
    scanf("%c", &alpha); //
    switch (alpha >= 'a' && alpha <= 'z')
    {
    case 1:
        alpha = alpha - 32;
        printf("upper case alpha = %c", alpha);
        break;
    case 0:
        alpha = alpha + 32;
        printf("lower case alpha = %c", alpha);
        break;
    }
}