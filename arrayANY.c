#include<stdio.h>
int main()
{
    int arr[100],value,pos,n,i;
    printf("Enyter the size of array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }   
    printf("enter the position to inser");
    scanf("%d",&pos);
    printf("enter the value of insert");
    scanf("%d",&value);
    for ( i =n-1; i>=pos-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    printf("final array");
    for ( i = 0; i <=n; i++)
    {
      printf("%d",arr[i]);
    }
    return 0;
    
    
}