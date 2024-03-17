//6.	Write a C program to enter radius of a circle and find its diameter, circumference and area.//
#include<stdio.h>
int main()
{
    int r,dia,circ,area;
    printf("Enter the radius of a circle");
    scanf("%d",&r);
    dia=(r+r);
    printf("Diameter of a circle is %d\n",dia);
    circ=(2*3.14*r);
    printf("Circumference of a circle is %d\n",circ);
    area=(3.14*r*r);
    printf("Area of a circle is %d",area);
    return 0;
}