// Write a program that uses for loops to find the largest element in a 1-D array and returns it.
#include <stdio.h>
int Largest(int arr[], int size);
int main() {
    int array[] = {1, 5, 32, 22, 78, 6, 45, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int largestElement = Largest(array, size);
    printf("The largest element in the array is: %d\n", largestElement);
    return 0;
}
int Largest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
