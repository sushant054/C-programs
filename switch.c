#include<stdio.h>
int main(){
    int n;
    printf("press 1 or 2:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("hi");
        break;
        case 2:
        printf("hello");
        break;

    default:printf("you enter wrong no!!!");
        break;
    }
    return 0;
}