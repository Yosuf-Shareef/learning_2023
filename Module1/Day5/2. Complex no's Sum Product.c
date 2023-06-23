#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex readComplex() {
    Complex complex;
    printf("Enter the real part: ");
    scanf("%lf", &complex.real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &complex.imaginary);

    return complex;
}

void writeComplex(Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

Complex addComplex(Complex complex1, Complex complex2) {
    Complex result;
    result.real = complex1.real + complex2.real;
    result.imaginary = complex1.imaginary + complex2.imaginary;
    return result;
}

Complex multiplyComplex(Complex complex1, Complex complex2) {
    Complex result;
    result.real = complex1.real * complex2.real - complex1.imaginary * complex2.imaginary;
    result.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;
    return result;
}

int main() {
    Complex complex1, complex2;

    printf("Reading Complex Number 1:\n");
    complex1 = readComplex();

    printf("\nReading Complex Number 2:\n");
    complex2 = readComplex();

    printf("\nComplex Number 1:\n");
    writeComplex(complex1);

    printf("\nComplex Number 2:\n");
    writeComplex(complex2);

    Complex sum = addComplex(complex1, complex2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    Complex product = multiplyComplex(complex1, complex2);
    printf("\nProduct of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
