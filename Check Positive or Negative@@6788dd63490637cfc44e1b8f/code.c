#include <stdio.h>
int main(){
    int x;
    int y;   scanf("%d", &x);
    if(x>0){
        printf("Positive");
    }
    if(x<0){
        printf("Negative");
    }
    if(x==0){
        printf("Zero");
    }
}