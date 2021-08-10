#include<stdio.h>

int main(){

    long a, i, j, b, c;
    scanf("%li",&a);
    b=a/2;

    for(i=1;i<=a;i++){
        c=a-b;
        for(j=1;j<=c;j++){
            if(i%2==0 && j==1){
                printf(" ");
                if(a%2!=0)
                    c--;
            }
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}