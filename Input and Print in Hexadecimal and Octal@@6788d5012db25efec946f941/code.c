#include <stdio.h>

int main() {
    float num1, num2, product;

    // Taking input of two floating-point numbers
    scanf("%f %f", &num1, &num2);

    // Calculating the product
    product = num1 * num2;

    // Printing the product
    printf("Product: %.2f\n", product);

    return 0;
}
