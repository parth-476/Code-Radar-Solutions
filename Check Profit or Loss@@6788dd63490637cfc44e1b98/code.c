#include <stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d", &x,&y);
    if(x>y){
        printf("Loss");
    }
    else if(x<y){
        printf("Profit");
    }
    else if(x=y){
        printf("No Profit No loss");
    }
    return 0;
}