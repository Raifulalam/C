//write a c program to enter two number and find their sum//
#include<stdio.h>
int main()
{
int a,b;
printf("please enter first number");
scanf("%d",&a);
printf("please enter second number");
scanf("%d",&b);
int sum=a+b;
printf("first numer you entered is %d\n second number you entered is %d\n and their sum is %d\n",a,b,sum);
//printf("second numer you entered is %d\n"b)//
return 0;
}