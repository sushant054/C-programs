#include <stdio.h>
int main() 
{
    //accept marks of students from user and print using array

    int arr[5],i;
    printf("Enter the marks of the student:");
    for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    printf("%d\t",arr[i]);
    return 0;
}