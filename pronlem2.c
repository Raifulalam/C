// #include<stdio.h>
// int main()
// {
//     int m,n,a,count=1;
//     printf("Enter the length and breadth");
//     scanf("%d%d",&m,&n);
//     printf("Enter the length of a");
//     scanf("%d",&a);
//     int areaF=a*a;
//     int areaS=m*n;
//     if(areaS>=0){
//         count=count+1;
//         areaS-=areaF;
//     }
//     printf(count);
// }
#include<stdio.h>
int main()
{
    long long  m,n,a,count=1;
    printf("Enter the length and breadth");
    scanf("%lld%lld",&m,&n);
    printf("Enter the length of a");
    scanf("%lld",&a);
    long an=n/a;
    long am=m/n;
    if(an%a!=0)
       an+1;
    if(am%a!=0)
       am+1;
   
}