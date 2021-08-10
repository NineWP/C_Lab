#include<stdio.h>

int main(){

    long a, i, j;
    scanf("%li",&a);

    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){
            if((i+j)%2==0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}