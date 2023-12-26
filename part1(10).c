// 10. Write a program that uses two functions to swap two numbers 
//a. Using a third variable 
//b. Without using a third variable
#include<stdio.h>
void swap1(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("WITH THIRD VARIABLE\n");
    printf("First number = %d\n",a);
    printf("Second number = %d\n",b);
}
void swap2(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("WITHOUT ANY THIRD VARIABLE\n");
    printf("First number = %d\n",a);
    printf("Second number = %d\n",b);
}
void main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    swap1(a,b);
    swap2(a,b);
}