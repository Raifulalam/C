
#include<stdio.h>
int main()
{
    int n='0';
    printf("enter the number of row");
    scanf("%c",&n);
    for(int i='A';i<=n;i++)
    {
        for(int j='A';j<=n;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}