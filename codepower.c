/*write a progrm to find power and square root of any number*/
#include<stdio.h>
#include<math.h>
int main()
{
    long base,pwr,exp,sqr;
    printf("Enter base value");
    scanf("%ld",&base);
    printf("Enter exponencial");
    scanf("%ld",&exp);
    pwr=pow(base,exp);
    printf("The %ld power of %ld is %ld\n",exp,base,pwr);
    printf("enter the number to print square root");
    scanf("%ld",&base);
    sqr=sqrt(base);
    printf("The square root of %ld is %ld\n ",base,sqr);
    return 0;
}