//16.	Write a C program to enter marks of five subjects and calculate total, average and percentage.//
#include<stdio.h>
int main()
{
    float eng,nep,math,sci,soc,total,percentage,average;
    printf("please enter the marks of the following subjects:-\n a)english\nb)nepali\nc)math\nd)science\ne)social\n");
    scanf("%f %f %f %f %f",&eng,&nep,&math,&sci,&soc);
    total=(eng+nep+math+sci+soc);
    printf("Total marks obtained is %f\n",total);
    average=(eng+nep+math+sci+soc)/5;
    printf("Average marks obtained is %f \n",average);
    percentage=(total/500)*100;
    printf("percentage=%f \n",percentage);
    return 0;
}