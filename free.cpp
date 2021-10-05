#include<stdio.h>

int main(){

    int x, i, j, c, n;
    scanf("%d",&x);

    if(x%2 == 0){
        n = x/2;
        c = x-1;
    }
    else{    
        n = x/2+1;
        c = x;
    }

    for(i = 0; i<n; i++){
        for(j = 1; j<=c; j++){
            if(j == n-i || j == n+i)
                printf("*");
            else    
                printf("-");
        }
        printf("\n");
    }
    i--;
    if(x%2 != 0)    
        i = i-1;

    for(; i>=0; i--){
        for(j = 1; j<=c; j++){
            if(j == n-i || j == n+i)
                printf("*");
            else    
                printf("-");
        }
        printf("\n");
    }
    
    return 0;
}