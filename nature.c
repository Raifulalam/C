//16. C program to print all natural numbers AND sum of it from 1 to n //
#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("Enter any number");
    scanf("%d",&n);
    printf("The natural numbers from 1 to %d are:\n",n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d,",i);
     sum=sum+i;
    }
    
    printf("\nThe sum of all natural number from 1 to %d is %d",n,sum);
    return 0;
}
