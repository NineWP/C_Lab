#include<stdio.h>

int main(){

    int num1[1000], num2[1000], a, b;
    int *m1,*m2;
    scanf("%d %d", &a,&b);

    m1 = num1;
    m2 = num2;

    for(int i = 0; i<a*b; i++)
        scanf("%d",&num1[i]);
    for(int i = 0; i<a*b; i++)
        scanf("%d",&num2[i]);

    for(int i = 0; i<a; i++){
        for(int j = 0; j<b ; j++){
            printf("%d ",*m1 + *m2);
            m1++;
            m2++;
        }
        printf("\n");
    }


}