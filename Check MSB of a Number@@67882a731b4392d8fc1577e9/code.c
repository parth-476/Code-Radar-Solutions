#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &num);

    // Check if the MSB is set
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
