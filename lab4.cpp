#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    bool b = 0; 
    int c = 1;
    scanf("%s",a);
    for(int i=0 ; a[i] != '\0' ;i++)
    {
        if('0' <= a[i] && a[i] <= '9')        // '0' = 48 , '9' = 57
        {
            if(b)                             // 0 = b = false
                c = (c*10) + a[i] - '0';       
            else
                c = a[i] - '0';   
            b = 1;
        }
        else
        {
            for(int j=1;j<=c;j++)
                printf("%c", a[i]);
            c = 1;
            b = 0;
        }
    }
    return 0;
}