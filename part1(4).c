// Write a program that takes n as user input and determines if it is even or odd.
#include <stdio.h>
int main(){
    int n; 
    printf("ENTER THE VALUE OF n \n");
    scanf("%d", &n);
    if(n%2==0){
        printf("THE NUMBER IS EVEN\n");
    }
    else{
        printf("THE NUMBER IS ODD\n");
    }
    return 0;
}