#include <stdio.h>

int main() {
    double number;

    printf("Enter a double number: ");
    scanf("%lf", &number);

    unsigned long long* ptr = (unsigned long long*)&number;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Original number: %.2f\n", number);
    printf("Hexadecimal exponent part: 0x%llx\n", exponent);
    printf("Binary exponent part: ");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");

    return 0;
}
