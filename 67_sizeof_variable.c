// sizeof() :- its return size of data type which is privide in memory to variable
#include <stdio.h>
void main()
{
    char ch;         // 1 byte
    int a;           // 4 byte
    short int b;     // 2 byte
    float h;         // 4 byte
    double g;        // 8 byte
    long long int p; // 8 byte
    long double m;
    printf("size of char = %d\n", sizeof(ch));
    printf("size of int = %d\n", sizeof(a));
    printf("size of short int = %d\n", sizeof(b));
    printf("size of float = %d\n", sizeof(h));
    printf("size of double = %d\n", sizeof(g));
    printf("size of long long int = %d\n", sizeof(p));
    printf("size of char = %d\n", sizeof(char));
    printf("size of long double = %d\n", sizeof(m));
}