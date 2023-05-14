#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, i , sum {} ;

    cout << "Enter how many amount of number do you want to input : ";
    cin >> n;

    for ( i = 1 ; i <= n ; i++)
    {
        sum = sum + pow(i,2);
    }

    cout << "Expected Square Sum is : " << sum << endl;

    return 0;
    
}