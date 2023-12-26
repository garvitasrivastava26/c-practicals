// Write a program that uses a function to calculate and return simple interest with given principal, rate, and time.
#include <stdio.h>
int simpleinterest(float principal, float rate, float time);
int main() {
    float principal, rate, time, si;
    principal= 4000;
    rate= 12;
    time= 3;
    si = simpleinterest(principal, rate, time);
    printf("SIMPLE INTEREST : %f\n ", si);
    return 0;
}
int simpleinterest(float principal, float rate, float time){
     float simpleinterest;
     simpleinterest =( principal * rate * time ) / 100 ;
     return simpleinterest;
}



