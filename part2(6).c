// Write a program to generate the Fibonacci series up to n terms using recursion.
#include<stdio.h>
int series(int n);
void main(){
    int n,num;
    printf("Enter till which term to be printed : ");
    scanf(" %d",&n);

        while(n!=0)
        {
            printf(" %d", series(n-1));
            n=n-1;
        }
        if(n==0)
        {
            printf(" %d ",series(n));
        }
    }
int series(int n){
    if(n<2)
    {
        return n; 
    }
    else
    {
        return series(n-1)+series(n-2);
    }
}