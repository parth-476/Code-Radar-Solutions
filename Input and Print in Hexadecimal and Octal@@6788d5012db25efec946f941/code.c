#include <stdio.h>

int main() {
    int num;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Printing hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);  // %X prints uppercase hex
    printf("Octal: %o\n", num);        // %o prints octal

    return 0;
}
