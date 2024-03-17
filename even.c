/*17. C program to print all even numbers AND sum of it from 1 to 
n*/
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter any number");
    scanf("%d",&n);
    printf("All even numbers from 1 to %d are:",n);
    for (int i = 1; i <=n ; i++)
    {
      if (i%2==0)
      {
        printf("%4d",i);
        sum=sum+i;
      }
    }
    printf("\nThe sum of all even numbers from 1 to %d is %d",n,sum);
    return 0;
}