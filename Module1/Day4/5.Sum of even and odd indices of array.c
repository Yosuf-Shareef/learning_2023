#include <stdio.h>

void Even_odd_index(int arr[], int size) {
    int even_index_sum = 0;
    int odd_index_sum = 0;

    for (int i = 1; i < size; i=i+2) {
    	even_index_sum += arr[i]; 
	}
	for (int i = 0; i < size; i=i+2) {
    	odd_index_sum += arr[i]; 
	}

    printf("Sum of even elements: %d\n", even_index_sum);
    printf("Sum of odd elements: %d\n", odd_index_sum);
}

int main() {
    int arr[] = {64,84,21,36,17,90,77,10,48,55};
    int size = sizeof(arr) / sizeof(arr[0]);

    Even_odd_index(arr, size);

    return 0;
}
