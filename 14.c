//14.	Write a C program to enter base and height of a triangle and find its area ?//
#include<stdio.h>
int main()
{
    float b,h,a;
    printf("Enter the base of a traingle");
    scanf("%f",&b);
    printf("Enter the hight of a traingle");
    scanf("%f",&h);
    a=(b*h)/2;
    printf(" The area of a traingle is %f\n",a);
    return 0;

}