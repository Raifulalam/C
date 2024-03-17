//number of array//
#include<stdio.h>
int main()
{
    int arr[]={10,20,20,20,30,1,0,0,0,60,60,40,50,70,90,6,40,0,6,0,50,1,0,5,5,0,50,0,0,0,2,0,5,8,7,5,5,5,5,5,2,1,8,5,2,2,2,5,7,8};
    printf("%d",sizeof(arr)/sizeof(arr[1]));
    return 0;
}