// Your code here...#include <stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("First");
    }
    else if(x<y){
        printf("Second");
    }
    else if(x=y){
        printf("Equal");
    }
    return 0;
}