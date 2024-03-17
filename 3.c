//write a programme to enter two numbers and performs all the arthmetic operations//
#include<stdio.h>
int main ()
{
int a,b;
printf("enter 1st number");
scanf("%d",&a);
printf("enter 2nd number");
scanf("%d",&b);
printf("the substraction of %d & %d is %d\n",b,a,b-a);
printf("The addition of %d & %d is %d\n",b,a,b+a);
printf("the multiplication of %d & %d is %d\n",b,a,b*a);
printf("the division of %d & %d is %d\n",b,a,b/a);
printf("the modulue of %d & %d is %d\n",b,a,b%a);
return 0;
}