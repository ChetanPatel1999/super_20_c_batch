// . Check whether a character is a vowel, consonant, or not an alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("alphabet is vovel");
        }
        else
        {
            printf("alphabet is consonent");
        }
    }
    else
    {
        printf("char is not a alphabet");
    }
}