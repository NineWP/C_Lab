#include<stdio.h>

void checkint(int *b, int a, int *c){           // check if this number is already print 
    int i;
    for(i=0;*(b+i)!='\0';i++){
        if(*(b+i)==a)
            break;
        else if(*(b+i)!= a && *(b+i+1)=='\0'){
            printf("%d ",a);
            *(b+*c) = a ; 
            *c += 1;
        }
    }

}

int main(){

    int a[10], b[8], c = 0;
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    for(int i=1;i<9;i++){
        if(a[i-1]%2==1 && a[i+1]%2==1){
            if(c>=1)
                checkint(b, *(a+i), &c);
            else{
                printf("%d ",a[i]);
                b[c] = a[i];
                c++; 
            }
        }
    }
}