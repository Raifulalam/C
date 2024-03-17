//5.	Write a C program to enter length and breadth of a rectangle and find its area.//
#include<stdio.h>
int main ()
{
    int l,b,area;
    printf("Enter length of a rectangle");
    scanf("%d",&l);
    printf("Enter the breadth of a rectangle");
    scanf("%d",&b);
    area=(l*b);
    printf("Area of rectangle is %d",area);
    return 0;
}