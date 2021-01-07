#include <iostream>
using namespace std;

int main(){

    double numbers {} , total {};

    cout << "Enter your numbers: ";
    cin >> numbers;
    
    do
    {
        total += numbers;
        
    } while (numbers > 0);

    cout << total;

    return 0;
    
}