#include <stdio.h>

// Function to swap two values of any type
void swap(void* ptr1, void* ptr2, size_t size) {
    char temp;
    char* p1 = (char*)ptr1;
    char* p2 = (char*)ptr2;

    while (size--) {
        temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int int1 = 5, int2 = 10;
    printf("Before swap: int1 = %d, int2 = %d\n", int1, int2);
    swap(&int1, &int2, sizeof(int));
    printf("After swap: int1 = %d, int2 = %d\n", int1, int2);

    float float1 = 3.14, float2 = 2.71;
    printf("Before swap: float1 = %f, float2 = %f\n", float1, float2);
    swap(&float1, &float2, sizeof(float));
    printf("After swap: float1 = %f, float2 = %f\n", float1, float2);

    char char1 = 'A', char2 = 'B';
    printf("Before swap: char1 = %c, char2 = %c\n", char1, char2);
    swap(&char1, &char2, sizeof(char));
    printf("After swap: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}
