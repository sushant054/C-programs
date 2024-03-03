#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.
    int a1;
    double b1;
    char s1[180];
    // Read and save an integer, double, and String to your variables.
   scanf( "%d",&a1);
   scanf( "%lf",&b1);
   scanf( "%*[\n]%[^\n]",s1);//when we press enter then...input will stop...
    // Print the sum of both integer variables on a new line.
    printf( "%d",i+a1);
    // Print the sum of the double variables on a new line.
    printf("\n%.1lf",d+b1);
    // Concatenate and print the String variables on a new line
    printf( "\n%s%s",s,s1);
    // The 's' variable above should be printed first.
    return 0;
} 