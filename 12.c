//12.	Write a C program to enter any number and calculate its square root.//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq;
    int exp,base,pr;
    printf("Enter the base");
    scanf("%d",&base);
    printf("Enter exponencial");
    scanf("%d",&exp);
    pr=pow(base,exp);
    printf("The %d power of %d is %d\n",exp,base,pr);
    printf("Enter any number");
    scanf("%d",&n);
    sq=sqrt(n);
    printf("The square root of %d is %d\n",n,sq);
    return 0;

}