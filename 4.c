//4.	Write a C program to enter length and breadth of a rectangle and find its perimeter.//
#include<stdio.h>
int main ()
{
    int l,b,perimeter;
    printf("Enter length");
    scanf("%d",&l);
    printf("Enter breadth");
    scanf("%d",&b);
    perimeter=(l+b)+(l+b);
    printf("The Perimeter of rectangle is %d",perimeter);
    return 0;
}