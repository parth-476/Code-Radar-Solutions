#include <stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d", &x, &y);
    if(x==(y*y)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}