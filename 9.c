//9.	Write a C program to enter temperature in Fahrenheit and convert to Celsius//
#include<stdio.h>
int main()
{
    float cl,fr;
printf("Enter the temperature in fahrenhite");
scanf("%f",&fr);
cl=((fr-32)/9)*5;
printf("%f degree celsius is equal to %f fahrenhite",fr,cl);
return 0;
}