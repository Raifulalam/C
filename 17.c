//17.	Write a C program to enter P, T, R and calculate Simple Interest.//
#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the principle");
    scanf("%f",&p);
    printf("enter time in year");
    scanf("%f",&t);
    printf("Enter rate of interest");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("simple interest = %f",si);
    return 0;
}
