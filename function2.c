//1. program without passing argument and no return type//
#include<stdio.h>
void sum();
int main()
{
sum ();
return 0;
}
void sum()
{
    int a,b,c;
    printf("\n Enter the number to sum");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("the sum is %d",c);
}