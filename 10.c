//10.	Write a C program to convert days into years, weeks and days.//
#include<stdio.h>
int main()
{
    int d,y,w,m,da;
    printf("Enter the number of days");
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    da=d-((y*365)+(w*7));
 printf("year = %d\n",y);
 printf("week =%d\n",w);
 printf("days =%d\n",da);
    return 0;
    }