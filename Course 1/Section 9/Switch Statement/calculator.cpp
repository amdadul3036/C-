// Create a Calculator using the switch Statement

#include <iostream>
using namespace std;


int main(){

    char operat;
    cout << "Enter your expected operator (+ , - , * , /): ";
    cin >> operat;

    double num1 {} , num2{};
    cout << " Enter num1 and num2 using space: ";
    cin >> num1 >> num2 ;

    switch (operat)
    {
    case '+':
        cout << " num1 + num 2 = " << num1 + num2;
        break;

    case '-':
        cout << " num1 - num 2 = " << num1 - num2;
        break;

    case '*':
        cout << " num1 * num 2 = " << num1 * num2;
        break;

    case '/':
        cout << " num1 / num 2 = " << num1 / num2;
        break;
    
    default:
        cout << " Sorry , your operator is invalid.";
        break;
    }

}