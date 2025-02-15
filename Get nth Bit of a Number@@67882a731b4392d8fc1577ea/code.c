#include <stdio.h>

// Function to get the value of the nth bit
int getNthBit(int number, int bitPosition) {
    return (number >> bitPosition) & 1;
}

int main() {
    int number, bitPosition;

    // Taking input from the user
    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the bit position (0-based): ");
    scanf("%d", &bitPosition);

    // Getting and printing the value of the nth bit
    int bitValue = getNthBit(number, bitPosition);
    printf("The value of the %dth bit is: %d\n", bitPosition, bitValue);

    return 0;
}
