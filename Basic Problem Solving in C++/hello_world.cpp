/*
Print Hello World 10 times along with the serial number and skip the 7th Hello World. Your
program would only print a total of 9 ‘Hello world’s along with the serial number.

    OUTPUT:
        1 Hello World
        2 Hello World
        3 Hello World
        4 Hello World
        5 Hello World
        6 Hello World
        8 Hello World
        9 Hello World
        10 Hello World

*/

#include<iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 10; i++){
        if (i==7)
        {
            continue;
        }else
        {
            {
            cout << i << " " << "Hello Wrold" << endl;
            }
        }
    }
    return 0;
}