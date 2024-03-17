//taking from user//
#include<stdio.h>
int main()
{
int a[100];
printf("Enter the elements of array");
for(int i=0;i<10;i++)
{
    scanf("%d",&a[i]);

}
//printf("elements in array");
for(int i=0;i<10;i++)
{
    printf("the element of array are %d\n",a[i]);
}
for(int i=9;i>=0;i--)
{
    printf("the  reverse order of array is %d\n",a[i]);

}
return 0;
}