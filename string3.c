// write a program to convert the lower case to higher//
#include<stdio.h>
#include<string.h>
int main(){
char str[60];
printf("Enter the string");
gets(str);
puts(str);
printf("\nthe length of the string is %d",strlen(str));
printf("\n the lower case os this string is %s",strlwr(str));
printf("\nthe upper case of the string is %s",strupr(str));
printf("\nthe reverse of this string is %s",strrev(str));
char str2[20];
printf("\nthe copy of this string is %s",strcpy(str2,str));
char str3[30];
printf("\n enter another string ");
gets(str3);
puts(str3);
printf("\nthe compare of this string is %d",strcmp(str,str3));
if(strcmp(str2,str)==0){
    printf("\nthe strings are same");
}
else {
    printf("\nthe strings are not same");
}
//printf("");
return 0;
}
