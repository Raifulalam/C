//11.	Write a C program to find power of any number x ^ y.//
#include<stdio.h>
#include<math.h>
int main ()
{
   long b,p,v;
    printf("Enter the base value ");
    scanf("%ld",&b);
    printf("Enter the power value ");
    scanf("%ld",&p);
    v=pow(b,p);
    printf("The %ld power of %d is %ld",p,b,v);
    return 0;

}