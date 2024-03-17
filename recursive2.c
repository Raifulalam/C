/*write a programe to print first n natural numbers*/
#include<stdio.h>
void natur();
int main(){
 int a;
 printf("enter the  number");
 scanf("%d",&a);
 natur(a);
 return 0;

}
void natur(int n){
    if(n>1)
natur(n-1);
printf("%d",n);
}