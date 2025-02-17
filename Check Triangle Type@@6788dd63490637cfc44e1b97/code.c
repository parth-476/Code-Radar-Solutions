#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    scanf("%d %d %d", &x, &y, &z);
    if(x=y=z){
        printf("Equilateral");
    }
    else if(x=y || x=z){
        printf("Isosceles");
    }
    else{
        printf("Scalele");
    }
    return 0;
}