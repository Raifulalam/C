//first programme of function//
#include<stdio.h>
void ab();
void sub();
int main()
{
ab();
sub(20,50);
sub(20,70);
ab();
return 0;
}
void ab(){
    int a,b,sum;
    printf("\nEnter the mumber");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The sum is %d",sum);
}
void sub(int a, int b)
{
    int x,y,z;
    printf("enter the number to subtract");
    scanf("%d%d",&a,&b);
    z=a-b;
    printf("\nthe sub is %d",z);

}