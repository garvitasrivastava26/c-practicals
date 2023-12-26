// Write a program to create a multi-level menu using switch cases that perform various basic mathematical operations (Add, Subtract, Divide, Multiply, Exponent).
#include <stdio.h>
#include <math.h>
void main()
{
    int choice,a,b;
    printf("Enter:\n1 for addition\n2 for subtraction\n3 for division\n4 for multiplication\n5 for exponent\n");
    scanf("%d",&choice);
    printf("Enter the first operand : ");
    scanf("%d",&a);
    printf("Enter the second operand : ");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
        {
            printf("Sum of %d and %d = %d",a,b,a+b);
            break;
        }
        case 2:
        {
            printf("Differencce of %d and %d = %d",a,b,a-b);
            break;
        }
        case 3:
        {
            printf("Division of %d and %d = %d",a,b,a/b);
            break;
        }
        case 4:
        {
            printf("Multiplication of %d and %d = %d",a,b,a*b);
            break;
        }
        case 5:
        {
            int exp=1;
            exp=pow(a,b);
            printf("%d to the power %d is = %d",a,b,exp);
            break;
        }
        default:
        {
            printf("INVALID CHOICE");
        }
    }
}