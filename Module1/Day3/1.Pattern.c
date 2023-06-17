#include <stdio.h>

void Increasing(int n);
void Spaces(int n);
void Decreasing(int n);

int main() {
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        Increasing(i);
        Spaces(n - i );
        Decreasing(i);
        printf("\n");
    }

    return 0;
}

void Increasing(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void Spaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf("  ");
    }
}

void Decreasing(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}
