#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[1000];
    cin >> a ;
    for(int i = strlen(a) ; i > 0 ; i--){
        cout << a << endl ;
        a[i-1] = '\0'; 
    }
}