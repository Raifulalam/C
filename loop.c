#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of row");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{ 
    for(int j=1;j<=5;j++)
    {
    printf("%d",i);
    }
printf("\n");
}
    return 0;
}