// . Write a program to accept roll no and marks of 3 subjects of a student,
// Calculate total of 3 subjects and average .
#include <stdio.h>
void main()
{
    int rno, hindi, english, math;
    int total;
    float average;
    printf("enter rno : ");
    scanf("%d", &rno);
    printf("enter math marks : ");
    scanf("%d", &math); // 50
    printf("enter english marks : ");
    scanf("%d", &english); // 30
    printf("enter hindi marks : ");
    scanf("%d", &hindi); // 20
    total = hindi + math + english;
    average = total / 3.0; 
    printf("student rno = %d\n", rno);
    printf("total marks = %d\n", total);
    printf("average marks = %.2f\n", average);
}