#include<stdio.h>
int main()
{
    int n='0';
    printf("Enter the number of row");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2==0) printf("%5c",i+96);
                else printf("%5c",i+64);
        }
        printf("\n");
    }
    return 0;
}

