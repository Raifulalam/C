//7.	Write a C program to enter length in centimeter and convert it into meter and kilometer.//
#include<stdio.h>
int main()
{
    int cm,m,km;
    printf("Enter the length in centimeter");
    scanf("%d",&cm);
    m=(cm*0.01);
    printf("%d cm is equal to %d meter\n",cm,m);
    printf("Enter the length in cm");
    scanf("%d",&cm);
    km=(cm*0.00001);
    printf("%d cm is equal to %d kilometer",cm,km);
    return 0;
}