#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if((x > z && y > z) || (z > x && y > x) || (z > y && x > y)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
