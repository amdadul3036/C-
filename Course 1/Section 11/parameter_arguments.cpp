// Writing a simple programm using function just to learn the difference between Parameters and Arguments

#include <iostream>
using namespace std;

int add(int x , int y){  //This x , y is parameter

    int addition = x + y ;
}

int main(){

    int a , b ;

    cout << "Enter first number: ";
    cin >> a ;

    cout << "Enter Second Number: ";
    cin >> b ;

    cout << add(a , b ) << endl;  //This a ,b is arguments.

    return 0 ;
}

/*
Arguments also called "Actual Arguments";
Parameters also called "Formal Arguments";
*/