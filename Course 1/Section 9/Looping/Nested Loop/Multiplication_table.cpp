// Section 9
// Nested Loops - Multiplication Table

#include <iostream>

using namespace std;

int main() {
    
     for (int num1 {1}; num1 <=99 ; ++num1) {
        for (int num2 {1}; num2 <=20; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "End of multiplication table of " << num1 << endl;
        cout << endl;
    }
    
    cout << endl;
    return 0;
}

