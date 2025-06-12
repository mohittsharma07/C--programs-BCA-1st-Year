#include<stdio.h>
int main()
{
    int a,b;//a>b,a is dividend and b is devisor
    printf("enter dividend");
    scanf("%d",&a);
    printf("enter devisor");
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q;
    printf("the reminder when is %d is dividend by %d is : %d",a,b,r);
    return 0;
}