#include <stdio.h>

// Function to clear the nth bit
unsigned int clearNthBit(unsigned int number, unsigned int bitPosition) {
    return number & ~(1 << bitPosition);
}

int main() {
    unsigned int number, bitPosition;

    // Taking input from the user
    printf("Enter the number: ");
    scanf("%u", &number);

    printf("Enter the bit position (0-based): ");
    scanf("%u", &bitPosition);

    // Clearing the nth bit and printing the updated number
    unsigned int updatedNumber = clearNthBit(number, bitPosition);
    printf("The updated number after clearing the %uth bit is: %u\n", bitPosition, updatedNumber);

    return 0;
}
