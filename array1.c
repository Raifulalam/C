//to print the average off 100 numbers using arrays//
#include<stdio.h>
int main(){
    int arr[10];
    float sum=0,avg;
    printf("Enter the elements of array");
    for (int i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    for ( int i=0;i<=9;i++)
      sum=sum+arr[i];
      avg=sum/10.0; 
      printf("the average is %f",avg);
        
    return 0;
}