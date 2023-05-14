// 1+2+3+4+5+6+...+n = ?

#include <iostream>
using namespace std;


int main(){

    int n,i;

    int sum = 0;

    cout << "How many numbers do you want ot add: ";
    cin >> n;

    for ( i = 1 ; i <=n ; i++)
    {
        sum = sum + i;
    }


    cout << "Sum of the first " << n << "numbers are: " << sum << endl;
    
}