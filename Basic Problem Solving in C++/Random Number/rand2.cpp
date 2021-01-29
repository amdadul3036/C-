#include <iostream>
#include <cstdlib>
#include <ctime>  //To use srand() we should use this header file

using namespace std;

int main(){

    int secret_Number {};
    srand(time(0));
    secret_Number = rand();

    cout << "Secret number is : " << secret_Number << endl;
}