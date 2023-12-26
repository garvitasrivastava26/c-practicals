// Write a program to find average, max and min elements from an array of n long integers.
#include <stdio.h>
int main() {
    int n;
   printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   int sum = 0, min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
     double average = (double)sum / n;
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2lf\n", average);
     printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}
