#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char a[1000];
    cin >> a ;
    for(int i=strlen(a);i>0;i--){
        for(int j=0;j<i;j++){
            cout << a[j];
        }
        cout << endl;
    }
}