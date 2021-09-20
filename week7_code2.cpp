#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string dataA, dataB, text;
    cout << "input : ";
    cin >> dataA;
    cout << "output : ";
    cin >> dataB; 

    ifstream file1(dataA);
    ofstream file2(dataB);

    while(getline(file1, text)){
        file2 << text << endl;
    }
}