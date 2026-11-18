// 1. Write a program using switch-case to check whether the entered character
// is a vowel or a consonant.
// #include <stdio.h>
// void main()
// {
//     char alpha;
//     printf("enter a alpha : ");
//     scanf("%c", &alpha);//p
//     switch(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
//     {
//        case 1:  printf("alpha is vowel");break;
//        case 0:  printf("alpha is consonent");break;
//     }
// }


//second way to make same program
// #include <stdio.h>
// void main()
// {
//     char alpha;
//     printf("enter a alpha : ");
//     scanf("%c", &alpha);//p
//     switch(alpha)
//     {
//        case 'a':  printf("alpha is vowel");break;
//        case 'e':  printf("alpha is vowel");break;
//        case 'i':  printf("alpha is vowel");break;
//        case 'o':  printf("alpha is vowel");break;
//        case 'u':  printf("alpha is vowel");break;
//        default:printf("alpha is consonent");
//     }
// }


//second way to make same program
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alpha : ");
    scanf("%c", &alpha);//a
    switch(alpha)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':  printf("alpha is vowel");break;
       default:printf("alpha is consonent");
    }
}