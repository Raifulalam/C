//printing the given data in reverse order//
#include<stdio.h>
int main()
{
    int arr[9]={34,56,54,67,69,87,75,21};
    for(int i=0;i<9;i++)
    {
        printf(" the number is %d\n",arr[i]);
    }
    for(int j=8;j>0;j--)
    {
        printf("the reverse order is %d\n",arr[j]);
    }
    return 0;
} 