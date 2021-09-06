#include<stdio.h>
int main(){

    int num[1000], a, b;
    int *m1, *m2;
    scanf("%d %d", &a,&b);
    for(int i = 0; i<a*b*2; i++){
        scanf("%d",&num[i]);
    }
    m1 = num;
    m2 = &num[a*b];

    for(int i = 0; i<a*b; m1++, m2++, i++){
        if(i%b==0)
            printf("\n");
        printf("%d ",*m1+*m2);
    }

}