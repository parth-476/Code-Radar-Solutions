#include<stdio.h>
int main(){
    int x;
    int y;
    scanf("%d %d",&x,&y);
    if(x,y>=0 && x,y<0){
        printf("Same Sign");
    }
    else if(x>0 && y>0 || x>0 && y<0){
        printf("Different Sign");
    }
    return 0;
}