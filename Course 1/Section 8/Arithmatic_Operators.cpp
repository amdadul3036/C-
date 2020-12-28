// Section 8
// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/
#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
  //  cout << num1 << " + " <<  num2 << " = "<< num1+ num2 << endl;
 
    int result {0};
    


    result = num1 + num2;
    cout << num1 << " + " <<  num2 << " = "<< result << endl;
    


    result = num1 - num2;
    cout << num1 << " - " <<  num2 << " = "<< result << endl;
    


    result = num1 * num2;
    cout << num1 << " * " <<  num2 << " = "<< result << endl;
    


    result = num1 / num2;
    cout << num1 << " / " <<  num2 << " = "<< result << endl;    
    


    result = num2 / num1;
    cout << num2 << " / " <<  num1 << " = "<< result << endl;  //Actually it is 0.5 but the output is 0 because result is integer type.
    


    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    


    num1 = 10;
    num2 = 3;
    


    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    


    result = num1 * 10 + num2;
    cout<<num1<<"*"<<10<<" + " << num2<<" = " << result<<endl;
    


    cout << 5/10 << endl; //It will give only integer part 0(Rather than 0.5)in output because in inputs both are in integer type.
    
    cout << 5.0/10.0 << endl;  //But it will give 0.5 which is float because inputs are in integer

    cout << 5/10.0 <<endl; //It will also give float value because one of the input is float.
    
    cout << endl;
    return 0;
}

