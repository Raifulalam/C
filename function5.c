//with passing arguments and with return type//
#include<stdio.h>
int sum();
int main()
{
    sum (0,0);
    sum (0,0);
    sum (5,0);
    return 0;

}
int sum(int a , int b)
{
    int n;
    printf("enter the character");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}