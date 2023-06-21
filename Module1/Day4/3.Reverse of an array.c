#include <stdio.h>


int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    printf("\nReversed Array: ");
    for (int i = size-1 ; i>=0; i--) {
        printf("%d ", arr[i]);
    }
  
    return 0;
}
