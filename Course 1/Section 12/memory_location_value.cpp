// *(memoryLocatio) indicates that "Go to this memory location and check if there are any value and if have then print the value"

#include <iostream>
using namespace std;

int main(){

    int x = 10;
    float y;

    int z = 20;

    cout << "Value at " << &z << " location is: " << *(&z) << endl;


    return 0;
}