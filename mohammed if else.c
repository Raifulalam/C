#include<stdio.h>
int main()
{
    char name,ram='a',sita='b';
    printf("what is your name \n");
    scanf("%c",&name);

    if(name=='a')
    {
    printf("you get iphone");

    }
    else if(name=='b')
    {
        printf("you get samsung");
    }
    else
    {
        printf("no phones");
    }
    
    return 0;
}