#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string dataA, dataB;
    cin >> dataA;

    ifstream file1(dataA);
    ofstream file2("C:/temp/data2.txt");

    while(getline(file1, dataB)){
        file2 << dataB << endl;
    }
    cout << "C:/temp/data2" ;
}