// print your name using string//
#include<stdio.h>
#include<string.h>
int main() {
char str[20];
printf("Enter your name");
gets(str);
printf("\nyour name is");
puts(str);
return 0;
}