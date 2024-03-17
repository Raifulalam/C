//13.	Write a C program to enter two angles of a triangle and find the third angle.//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the first angle of a taringle ");
    scanf("%d",&a);
    printf("Please enter the second angle of the traingle");
    scanf("%d",&b);
    c=(180-a)-b;
    printf("The third angle of a traingle is %d\n",c);
    return 0;
}