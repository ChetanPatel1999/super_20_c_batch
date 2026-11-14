// . Write a  program to check whether a character is uppercase alphabet or lowercase
// alphabet or not alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c", &ch); // b
    if (ch >= 'a' && ch <= 'z')
    {
        printf("char is lower case alphabet");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("char is uper case alphabet");
    }
    else
    {
        printf("char is not alphabet");
    }
}