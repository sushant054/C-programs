#include <stdio.h>

int main() { 
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int mul = a * b;
    printf("The product of %d and %d is: %d\n", a, b, mul);
    return 0;
}
