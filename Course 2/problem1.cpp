// Write a program to print the sum of two numbers entered by user by defining your own function.

#include <iostream>
using namespace std;

void addition(int a , int b){

    int sum = a + b ;
    cout << sum << endl;
}

int main(){

    addition(10 , 20);
    addition(20 , 100);

    return 0;
}
