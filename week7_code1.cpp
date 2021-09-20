#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

int main(){
    int x, y;

    ifstream fileA("a.txt");
    fileA >> x >> y;
    fileA.close();

    ofstream fileB("b.txt");
    fileB << x+y;
    fileB.close();

}