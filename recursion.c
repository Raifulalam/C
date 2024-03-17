/*write a program to print factorial of n term using recursiob*/
#include<stdio.h>
int fact();
int main(){
    int a,b;
    printf(" Enter the number");
    scanf("%d",&b);
    a=fact(b);
    printf("The factorial is  %d",a);
    return 0;
}
int fact( int n){
    if(n==1)
    return 1;
    return (n*fact(n-1));

}