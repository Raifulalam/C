// wriyte a program to reverse a string //
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the name");
    gets(str);
    printf("\n your name is ");
    puts(str);
    printf("The reverse of this string is %s",strrev(str));

    return 0;

}