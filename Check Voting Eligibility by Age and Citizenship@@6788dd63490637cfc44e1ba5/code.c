#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x >= 18 && x==1 ) {
        printf("Eligible");
    } else if (x<18 && x==0){
        printf("Not Eligible");
    }
    return 0;
}
