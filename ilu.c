// i love you programe//
#include<stdio.h>
int main()
{ 
    char s1[30];
    printf("Enter your name");
    scanf("%s",&s1);
    printf("%s\n",s1);
    printf("%s\n",strrev(s1));
    printf("%d\n",strlen(s1));
    return 0;
}