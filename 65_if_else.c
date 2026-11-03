// 20. Write a program to accept username and password and verify login (hardcoded
// values).
#include <stdio.h>
void main()
{
    char user;
    int password;
    printf("enter user name : ");
    scanf("%c", &user);
    printf("enter password  : ");
    scanf("%d", &password);
    if (user == 'm' && password == 1234)
    {
        printf("login succefully !");
    }
    else
    {
        printf("your user or password is incorrect !");
    }
}