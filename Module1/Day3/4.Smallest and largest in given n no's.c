#include <stdio.h>

void findSmallestAndLargestDigits(int number) {
    int smallestDigit = 9;
    int largestDigit = 0;

    int currentNumber = number;
    while (currentNumber != 0) {
        int digit = currentNumber % 10;
        currentNumber /= 10;

        if (digit < smallestDigit) {
            smallestDigit = digit;
        }

        if (digit > largestDigit) {
            largestDigit = digit;
        }
    }

    printf("Smallest Digit: %d\n", smallestDigit);
    printf("Largest Digit: %d\n", largestDigit);
    printf("\n");
}

int hasSingleDigit(int number) {
    int count = 0;

    while (number != 0) {
        count++;
        number /= 10;
    }

    if (count == 1) {
        return 1; // Single-digit number
    }

    return 0; // Not a single-digit number
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid value of n\n");
        return 0;
    }

    int numbers[n];

    int invalidNumber = 0; // Flag to indicate if there is a single-digit number

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (hasSingleDigit(numbers[i])) {
            invalidNumber = 1; // Set the flag to indicate the presence of a single-digit number
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Output %d:\n", i + 1);
        if (hasSingleDigit(numbers[i])) {
            printf("Invalid\n");
        } else {
            findSmallestAndLargestDigits(numbers[i]);
        }
    }



    return 0;
}
