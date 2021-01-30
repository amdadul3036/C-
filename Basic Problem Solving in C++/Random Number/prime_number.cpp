#include <iostream>
using namespace std;

int prime(int a);

int main(){

    int number {};

    cout << "Enter a number that you want to check if it is prime or not : " ;
    cin >> number;

    prime(number);
}

int prime(int a){

    int count {};
    for (int i = 2; i < a ; i++)
    {
        if (a%i == 0)
        {
            count = count + 1 ;
                cout <<  a << " is not a prime number." << endl;
        }else
            {
                cout << a << " is a prime number." << endl;
            }

        return 0;  
    }  
}