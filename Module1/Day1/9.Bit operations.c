#include <stdio.h>
int bit_operations(int num, int oper_type, int pos);

int main() {
    int num, oper_type, pos;
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);
    printf("Enter the position (0-31): ");
    scanf("%d", &pos);

    int result = bit_operations(num, oper_type, pos);
    printf("Result: %d\n", result);

    return 0;
}

int bit_operations(int num, int oper_type, int pos) {
    int bitMask;
    switch (oper_type) {
        case 1:
            // Set 2 bits from nth bit position
            bitMask = (1 << 2) - 1; // Create a mask with 2 bits set (0b11)
            bitMask <<= pos; // Shift the mask to the desired position
            num |= bitMask; // Set the bits in the number
            break;
        case 2:
            // Clear 3 bits from nth bit position
            bitMask = (1 << 3) - 1; // Create a mask with 3 bits set (0b111)
            bitMask <<= pos; // Shift the mask to the desired position
            num &= ~bitMask; // Clear the bits in the number
            break;
        case 3:
            // Toggle MSB (Most Significant Bit)
            num ^= (1 << 31);
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return num;
}