#include <stdio.h>

int findLargestNumber(int number) {
    int largestNumber = -1;

    // Convert the number to a string for easier manipulation
    char numberString[5];
    sprintf(numberString, "%d", number);

    // Iterate through each digit and remove it
    for (int i = 0; i < 4; i++) {
        char modifiedNumberString[4];
        int index = 0;

        // Construct the modified number string without the current digit
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                modifiedNumberString[index++] = numberString[j];
            }
        }
        modifiedNumberString[index] = '\0';

        // Convert the modified number string back to an integer
        int modifiedNumber = atoi(modifiedNumberString);

        // Compare and update the largest number if necessary
        if (modifiedNumber > largestNumber) {
            largestNumber = modifiedNumber;
        }
    }

    return largestNumber;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);

    printf("The largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
