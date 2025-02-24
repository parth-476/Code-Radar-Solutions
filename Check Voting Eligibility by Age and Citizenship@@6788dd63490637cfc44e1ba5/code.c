#include <stdio.h>

int main() {
    int age, citizen;
    printf("Enter age and citizenship status (1 for citizen, 0 for non-citizen): ");
    scanf("%d %d", &age, &citizen);
    if (age >= 18 && citizen == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
    return 0;
}
