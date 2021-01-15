#include <iostream>
using namespace std;

int main(){

    int x = 10;
    float y;

    int z = 10;

    cout << x << " -- This is the value of x" << endl;
    cout << &x << " -- This is the memory location of x" << endl;
    cout << &y << " -- This is the memory location of y" << endl;  //So to find the memory location just use "&".
    cout << "----------------------------------------------" << endl;
    cout << "Look at the memory location of x and z who contains same value:" << endl;
    cout << "----------------------------------------------" << endl;
    cout << &z << " -- This is the memory location of z" << endl;
    cout << &x << " -- This is the memory location of x" << endl;
    cout << "==============================================" << endl;
    cout << "The memory location of x and z is same because they contain same value." << endl;
    cout << "==============================================" << endl;


    return 0;
}