// Given a positive integer n, write a program to calculate and return the sum of natural numbers up to n using loops.
#include <stdio.h>
int sum(int n);
int main (){
    int n, sum1;
    printf("ENTER THE VALUE OF n \n");
    scanf("%d", &n);
    sum1 = sum(n);
    printf("SUM OF n NATURAL NUMBERS IS %d\n", sum1);
    return 0;
}
int sum(int n){ 
    int sum= 0;
    for(int i=0; i<=n; i++){
       sum = sum + i ;
    }
    return sum;
}































