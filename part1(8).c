// Write a program to calculate and return the sum of elements of a 1-D array.
#include <stdio.h>
int calc_sum(int size, int array[]);
int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = calc_sum(size, array);
    printf("THE SUM OF THE NUMBERS PRESENT IN ARRAY IS %d", sum);
    return 0;
}
int calc_sum(int size, int array[]){
    int sum=0;
    for(int i=0; i < size; i++){
        sum = sum + array[i]; 
    }
    return sum;
}