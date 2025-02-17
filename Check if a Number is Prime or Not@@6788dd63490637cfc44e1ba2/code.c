#include <stdio.h>

int main() {
    int x, i, isPrime = 1;
    scanf("%d", &x);
    if (x <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}
