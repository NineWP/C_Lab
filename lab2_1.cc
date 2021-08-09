#include<stdio.h>

int main(){
    long a, i;
    printf("Enter number : ");
    scanf("%li",&a);
    printf("Factoring result : ");

    for(i=2;a!=1;i++){
        if(a%i==0){
            printf(" %li ",i);
            a=a/i;
            i=1;
            if(a!=1)
                printf("x");
        }
    }
    return 0;
}
