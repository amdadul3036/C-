// Write a code to check if a number is prime or not


#include <iostream>
using namespace std;

void prime(int a);

int main(){

    int number {};

    cout << "Enter a number that you want to check if it is prime or not : " ;
    cin >> number;

    prime(number);
}

void prime(int a){

    if (a == 0 || a == 1){
        cout << a << " is not prime" << endl;
    }

    int flag_sign = 0 ;
    for (int i = 2; i < a/2 ; i++)
    {
        if (a%i == 0)
        {
                cout <<  a << " is not a prime number." << endl;
                flag_sign = flag_sign + 1;
                break;
        }
    }
    if(flag_sign = 0){
         cout << a << " is a prime number." << endl;
    }
}  