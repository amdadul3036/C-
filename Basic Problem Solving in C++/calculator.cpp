/*
In this problem you will develop a calculator which can do Addition, Subtraction, Multiplication,
Division and Modulo (Remainder). Use switch-case statement.

Your program will take input as follows:

        Input       Output
        4 + 7         11
        7 % 3          1
*/


#include<iostream>
using namespace std;

int main(){
        int number1 , number2 ;
        char operat;

                cout << "Enter the first number : ";
                cin >> number1;

                cout << "Enter the second number : ";
                cin >> number2;

                cout << "Enter the operator : " ;
                cin >> operat;


        switch (operat)
        {
        case '+':
                cout << number1 + number2;
                break;

        case '-':
                cout << number1 - number2;
                break;

        case '*':
                cout << number1 * number2;
                break;

        case '/':
                cout << static_cast <float> (number1 / number2);
                break;
        case '%':
                cout << number1 % number2;
                break;
        default:
                cout << "Sorry, Enter valid operator." << endl;
                break;
        }

        return 0;
}