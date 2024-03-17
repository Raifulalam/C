//1.	Write a C program to check Least Significant Bit (LSB) of a number is set or not.//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number");
    scanf("%d",&num);
    if(num & 1)
    printf("The number you entered is LSB of set 1");
    else printf("The number you entered is not a set");
    return 0;
}