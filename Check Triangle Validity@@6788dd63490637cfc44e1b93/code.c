#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d %d %d", &x, &y, &z);
    if(x+y>z || z+y>x || z+x>y){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}