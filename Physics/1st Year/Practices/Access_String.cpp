#include<iostream>
using namespace std;

int main() {
    string myString = "Hello";
    cout << myString[0]<<endl;
    myString[0]= 'P';
    cout << myString<<endl;
    return 0;
}