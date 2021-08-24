#include<stdio.h>

int main(){
    int a[10] , b[8] , c = 0;
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(int i=1;i<9;i++){
        if(a[i-1]%2!=0 && a[i+1]%2!=0){
            if(c>=1){
                for(int j=0;b[j]!='\0';j++){    // check if this number is already print
                    if(b[j] == a[i])
                         break;
                    else if(b[j]!=a[i] && b[j+1]=='\0'){
                        printf("%d ",a[i]);
                        b[c] = a[i] ; 
                        c++;
                    }
                }
            }
            else{
                printf("%d ",a[i]);
                b[c] = a[i];
                c++; 
            }
        }
    }
}