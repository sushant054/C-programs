#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter Second no:");
    scanf("%d",&b);
    //swap two numbers without using 3rd variable..... 
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nfirst no %d",a);
    printf("\nsecond no %d",b);
    return 0;
}