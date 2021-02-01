// Write a program to find the exponential value without using pow() functions 

#include <iostream>
using namespace std;

void exponential(int base , int power);

int main(){

    int base , power ;

    cout << "Enter the base: " ;
    cin >> base;

    cout << "Enter the power: " ;
    cin >> power;

    exponential(base , power);
}

void exponential(int base , int power){
    int result = 0;
    for(int i = 1 ; i < power ; i++){
        result += base*base;
    }

    cout << result << endl;
}