//Write a C program to enter two numbers and perform all arithmetic operations.
#include <stdio.h>

int main()
{
    int n1, n2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two numbers: ");
    scanf("%d%d", &n1, &n2);

    sum = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = (float)n1 / n2;
    mod = n1 % n2;

    printf("Sum = %d\n", sum);
    printf("Substraction = %d\n", sub);
    printf("Multiplication = %d\n", mult);
    printf("Division = %f\n", div);
    printf("Mode = %d", mod);

    return 0; 
}