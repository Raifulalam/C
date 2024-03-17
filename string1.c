//write a program to find the length of string//
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter your name");
    gets(str);
    printf("Your name is ");
    puts(str);
    printf("the length of %s is %d",str,strlen(str));
    return 0;
}
