#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    //if any one of them is true...
    if(n==1 || n==0)
        //factorial of 1 and 0 is 1
        return fact;
    else
    {
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
    }
    return fact;
}
int main()
{
    int n,ans ;
    printf("\nEnter n:");
    scanf("%d",&n);
    ans=factorial(n);
    printf("Output: %d",ans);
    return 0;
}


