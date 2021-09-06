#include<stdio.h>

int main(){

    char str[1000] , *p;
    scanf("%s",str);
    p = str;
    for(int i = 0; *(p+i) != '\0'; i++)
    {
        if(i==0 || *(p+i) != *(p+i-1))
        printf("%c", *(p+i));
    }
}
