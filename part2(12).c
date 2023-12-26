// Write a program to calculate the factorial of a number using recursion.
#include <stdio.h>
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
void main()
{
    int n, fact;
    printf("Enter the number for which the factorial is to be calculated : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is = %d",n,fact);
}
