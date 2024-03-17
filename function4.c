//without passsing arguments and with return type/
#include<stdio.h>
int sum();
int main()
{
    sum();
    return 0;
}
int sum()
{
    int a,b,c;
    printf("Enter the number ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("the sum of %d & %d is %d ",a,b,c);
    return 0;
}