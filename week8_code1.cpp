#include<stdio.h>

int main(){
    int x, y;
    printf("Enter x and y : ");
    scanf("%d %d",&x, &y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("x = %d , y = %d", x, y);
}