//15.	Write a C program to calculate area of an equilateral triangle.
#include<stdio.h>
#include<math.h>
int main()
{
    float n,a;
    printf("enter the angle of a equilateral traingle ");
    scanf("%f",&n);
    a=(pow(3,0.5)*(n*n)/4);
    printf(" the area of a eqilateral traingle is %f",a);
    return 0;
}
