//8.	Write a C program to enter temperature in Celsius and convert it into Fahrenheit.//
//9.	Write a C program to enter temperature in Fahrenheit and convert to Celsius//
#include<stdio.h>
int main()
{
    float cl,fr;
printf("Enter the temperature in celcius");
scanf("%f",&cl);
fr=(cl*9/5)+32;
printf("%f degree celsius is equal to %f fahrenhite",cl,fr);
return 0;
}