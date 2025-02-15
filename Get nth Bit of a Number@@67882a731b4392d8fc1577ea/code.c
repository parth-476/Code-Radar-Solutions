#include <stdio.h>

// Function to get the value of the nth bit
int getNthBit(int number, int bitPosition) {
    return (number >> bitPosition) & 1;
}

int main() {
    int number, bitPosition;

    // Taking input from the user

    scanf("%d", &number);


    scanf("%d", &bitPosition);

    // Getting and printing the value of the nth bit
    int bitValue = getNthBit(number, bitPosition);
    printf(" %d\n", bitPosition, bitValue);

    return 0;
}

