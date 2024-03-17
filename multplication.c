/*18. C program to print multiplication table of a number.*/
#include<stdio.h>
int main()
{
    int table;
    printf("Enter any number to print table");
    scanf("%d",&table);
    printf("The table of %d is here:\n",table);
    for (int i = 1; i <=10 ;i++)
    {
        printf("%d * %d = %d\n",table,i,table*i);
    }
    return 0;
}