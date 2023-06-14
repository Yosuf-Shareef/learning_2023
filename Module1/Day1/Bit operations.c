#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1: // Set 1st bit
            num |= 1; // OR with 0000...0001 to set 1st bit
            break;
        case 2: // Clear 31st bit
            num &= ~(1 << 31); // AND with complement of 1 shifted 31 times to clear 31st bit
            break;
        case 3: // Toggle 16th bit
            num ^= 1 << 15; // XOR with 1 shifted 15 times to toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    return num;
}

int main() {
    int num, oper_type, result;
    
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    
    printf("Result= %d\n", bit_operations(num, oper_type));
    
    return 0;
}