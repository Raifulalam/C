/*write a progrm to find power and square root of any number*/
#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;
int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);
while (exp != 0) {
        result *= base;
        --exp;
}

    root = sqrt(num);
    printf("Square root of %.2lf = %.2lf", num, root);
printf("Answer = %.0Lf", result);


    return 0;
}