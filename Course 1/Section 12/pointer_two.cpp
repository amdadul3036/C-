#include <iostream>
using namespace std;

int main(){

    int x {10};

    int* px =  &x; //px is a pointer pointing towards an integer x
    *px = 15 ; //It means go to the location where px is pointing and give the location value 15
    cout << x ;  //It will print 15 ; not 10 .


    //2nd Pointer

    int** pxx; //It means pxx is a pointer which pointing toward an integer pointer px
    pxx = &px; // We are substituting the address of px into pxx

    cout << &x << endl ; // It will print the memory location of x
    cout << &px << endl ; // It will print the memory location of px
    cout << pxx << endl ; // It will also print the memory location of px because we substitute it
    cout << &pxx << endl ; // It will print the memory location of pxx


    cout << **pxx << endl ;
    cout << *pxx << endl ;


    return 0;
}