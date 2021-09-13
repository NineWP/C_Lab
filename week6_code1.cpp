#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

       string text;
       ofstream FileOut;
       FileOut.open("data.txt");
       while(text != "."){
           getline(cin , text);
           FileOut << text << endl;
       }
       FileOut.close();
}