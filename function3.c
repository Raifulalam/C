//2. programe with passing argument and without return type//
#include<stdio.h>
void sum();
int main()
{
    printf("Please do calculation here\n");
    sum(1,2);
    sum(0,0);
    //1,2,0,0 doesnot woks its just an argumntrs//
    return 0;
} 
void sum (int a, int b)
{
    int x,y,z,s;
    printf("Enter the numbers to sum\n");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("%d is the sum of %d & %d\n",z,x,y);
}
