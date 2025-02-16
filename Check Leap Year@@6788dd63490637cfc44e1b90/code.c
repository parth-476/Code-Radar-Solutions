#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    printf("enter a year: ", x)
    if(x%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
}