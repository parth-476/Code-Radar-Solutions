#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x>0){
        printf("Above Freezing");
    }
    else if(x<=0){
        printf("Freezing");
    }
    return 0;
}