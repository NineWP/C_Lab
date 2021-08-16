#include<stdio.h>

void cal(int a){
    int sum=0;
    while(a!=0){
        sum += a%10;
        a=a/10;
    }
    if(sum>=10)
        cal(sum);
    else{
        printf("%d",sum);
    }
}

int main(){
    int a;
    scanf("%d",&a);
    cal(a);
}