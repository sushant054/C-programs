#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter Second no:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    //swapping...
    printf("After swaping:");
    printf("First no:%d",a);
    printf("Second no:%d",b);
    return 0;
}
