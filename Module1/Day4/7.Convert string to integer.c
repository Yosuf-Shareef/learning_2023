#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];
    int num;

    printf("Enter a string: ");
    scanf("%s", str);

    num = atoi(str);

    printf("Converted integer: %d\n", num);

    return 0;
}
