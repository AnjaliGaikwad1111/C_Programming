//Write a C program to perform input/output of all basic data types.
#include <stdio.h>
 
int main()
{
    int num;
    char c;
    float f;

    printf("Enter the integer: ");
    scanf("%d", &num);
 
    printf("\nEntered integer is: %d", num);
 
    printf("\n\nEnter the float: ");
    scanf("%f", &f);
 
    printf("\nEntered float is: %f", f);
 
    printf("\n\nEnter the Character: ");
    scanf("%s", &c);
 
    printf("\nEnter character is: %s", c);
 
    return 0;
}