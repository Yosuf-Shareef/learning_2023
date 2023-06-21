#include <stdio.h>

// Function to calculate the sum of elements in the array
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of elements in the array
float calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return (float)sum / size;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, size);
    float average = calculateAverage(arr, size);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
