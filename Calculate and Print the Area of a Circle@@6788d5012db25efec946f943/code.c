#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius: "); // Prompt the user for input
    scanf("%f", &radius); // Corrected variable name
    printf("Area: %f\n", 3.14 * (radius * radius)); // Added newline for better output formatting
    return 0;
}
