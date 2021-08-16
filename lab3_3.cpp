#include<stdio.h>

int main(){
    int a, i, j, b=1, w;
    scanf("%d",&a);
    w=(a*2)-1;
    for(i=1;i<=a;i++){
        for(j=1;j<=w;j++){
            if(j<=b||j>w-b)
                printf("* ");
            else
                printf("  ");
        }
    printf("\n");
    b++;
    }
    b-=2;
    for(i=1;i<=a-1;i++){
        for(j=1;j<=w;j++){
            if(j<=b || j>w-b)
                printf("* ");
            else
                printf("  ");
        }
    printf("\n");
    b--;
    }
}