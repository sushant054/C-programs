#include <stdio.h>
// here we are...printing different data types
int main() {
    int n;
    float f;
    double d;
    long double ld;
    char c;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("Enter a float: ");
    scanf("%f",&f);
    printf("Enter a double: ");
    scanf("%lf",&d);
    printf("Enter a long double: ");
    scanf("%Lf",&ld);
    printf("Enter a character: ");
    scanf(" %c",&c);
    printf("You entered:\n");
    printf("Integer: %d\n", n);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("Long Double: %Lf\n", ld);
    printf("Character: %c\n",c);
    return 0;
}
