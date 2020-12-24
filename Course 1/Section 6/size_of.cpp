// The sizeof operator

#include <iostream>
#include <climits>      // make sure you include climits for integer types
                                  // Similar information for floating point numbers
                                  // is contained in <cfloat>
using namespace std;

int main() {

    std::cout << "sizeof information" << endl;
    std::cout << "========================" << endl;
    

    //sizeof() operator reveals the size of the operators in "Bytes".

    std::cout << "char: " << sizeof(char) << " bytes." << endl;
    std::cout << "int : " << sizeof(int) << " bytes." << endl;
    std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    std::cout << "short: " << sizeof(short) << " bytes." << endl;
    std::cout << "long: " << sizeof(long) << " bytes." << endl;
    std::cout << "long long: " << sizeof(long long) << " bytes." << endl;
    
    std::cout << "========================" << endl;

    std::cout << "float: " << sizeof(float) << " bytes." << endl;
    std::cout << "double: " << sizeof(double) << " bytes." << endl;
    std::cout << "long double: " << sizeof(long double) << " bytes." << endl;

    // use values defined in <climits>
    std::cout << "========================" << endl;
    
    std::cout << "Minimum values:" << endl;
    std::cout << "char: " << CHAR_MIN << endl;
    std::cout << "int: " << INT_MIN << endl;
    std::cout << "short: " << SHRT_MIN << endl;
    std::cout << "long: " << LONG_MIN << endl; 
    std::cout << "long long: " << LLONG_MIN << endl;
     
    std::cout << "========================" << endl;
    
    std::cout << "Maximum values:" << endl;
    std::cout << "char: " << CHAR_MAX << endl;
    std::cout << "int: " << INT_MAX << endl;
    std::cout << "short: " << SHRT_MAX << endl;
    std::cout << "long: " << LONG_MAX << endl; 
    std::cout << "long long: " << LLONG_MAX << endl;
    
    // sizeof can also be used with variable names
    std::cout << "========================" << endl;
    
    std::cout << "sizeof using variable names" << endl;
    int age {21};
    std::cout << "age is " << sizeof(age) << " bytes." << endl;
    // or
     std::cout << "age is " << sizeof age << " bytes." << endl;
     
    double wage { 22.24};
    std::cout << "wage is " << sizeof(wage) << " bytes." << endl;
    // or
    std::cout << "wage is " << sizeof wage << " bytes." << endl;


    return 0;
}

