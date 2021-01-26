// With arguments and return value

#include <iostream>
using namespace std;

int sqr(int a){
    int ans = a * a;
}

int main(){
    int number,answer;

    cout << "Enter a number: ";
    cin >> number;

    answer = sqr(number);

    cout << "Answer is: " << answer << endl;
}
