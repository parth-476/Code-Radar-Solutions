#include <stdio.h>

int main() {
    unsigned int num;

    scanf("%u", &num);

    // Check if the MSB is set
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}

