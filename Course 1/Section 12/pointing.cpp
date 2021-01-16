#include <iostream>
using namespace std;

int main(){

    int x {10};

    int* px; //px is a pointer pointing towards an integer
    px =  &x;
    cout << px << endl; //It will print the memory location
    cout << *px << endl; //It will print the value who is stored at this location

    return 0;
}