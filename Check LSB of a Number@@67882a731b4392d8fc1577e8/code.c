#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}
