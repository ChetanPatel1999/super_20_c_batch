#include <stdio.h>
void main()
{
    int a = 12, b;
    //  b = ++a;  // pre increamet :- frist increase value of a by 1 and then updated value assign in b;
    b = a++;               // post increment :- first assign a value in b after that increase a value by 1.
    printf("a = %d\n", a); // 13
    printf("b = %d\n", b); // 12

    int age = 12;
    printf("age = %d\n", ++age);
    // printf("age = %d\n", age++);
    printf("age = %d\n", age);
}