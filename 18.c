//18.	Write a C program to enter P, T, R and calculate Compound Interest.//
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci,n;
    printf("enter the principle");
    scanf("%f",&p);
    printf("enter time in year");
    scanf("%f",&t);
    printf("Enter rate of interest");
    scanf("%f",&r);
    //printf("enter the number of interest pr year ");
    //scanf("%f",&n);
    ci=(p*pow(1+r/100,t));
    printf("compound interest = %f",ci);
    return 0;
}