// Write a program to calculate the factorial of a number using a for loop and return its value.
#include <stdio.h>
int factorial(int n);
int main(){
    int n, fact;
    printf("ENTER THE VALUE OF n\n");
    scanf("%d", &n); 
    fact = factorial(n);
    printf("THE FACTORIAL OF GIVEN NUMBER IS %d\n", fact);
    return 0;
}
int factorial(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial = factorial * i ;
    }
    return factorial;
}