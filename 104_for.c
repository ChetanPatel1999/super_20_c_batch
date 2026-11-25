// 21. Write a program to display lowercase alphabet a to z.
#include <stdio.h>
void main()
{
    // int i;
    // for (i = 97; i <= 122; i++)
    // {
    //     printf("%c ", i);
    // }

    int i;
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c ", i);
    }

   printf("\n-------------------------------------------------------------------\n");
   
   for (i = 65; i <= 90; i++)
    {
        printf("%c ", i);
    }
}