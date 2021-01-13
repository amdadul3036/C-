// Find the maximum and minimum value of the given numbers;


#include <iostream>
#include <vector>
using namespace std;

int main(){

    int input;
    vector <int> numbers;

    cout << "Enter the numbers of your list: ";

    while (cin >> input){

    numbers.push_back(input);

    }

    cout << numbers;

    // int max = numbers.at(0);

    // for (int i = 0; i < numbers.at(i); i++)
    // {
    //     if (numbers.at(i) > max )
    //     {
    //         max = numbers.at(i);
    //     }else
    //     {
    //         max = max;
    //     }

              
    // }

    // cout << "Maximum number is: " << max;

    //     return 0;
    
}