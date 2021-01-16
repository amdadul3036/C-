#include <iostream>
using namespace std;

int main(){

    int x {10};

    int* px =  &x; //px is a pointer pointing towards an integer x
    *px = 15 ; //It means go to the location where px is pointing and give the location value 15
    cout << x ;  //It will print 15 ; not 10 .

    return 0;
}