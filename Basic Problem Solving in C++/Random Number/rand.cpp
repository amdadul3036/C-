#include <iostream>
#include <cstdlib>  //To use rand() we should use this header file.

using namespace std;

int main(){
    int secret_Number {};
    secret_Number = rand();

    cout << "Secret number is: " << secret_Number << endl;

    return 0;

    //It will give a same random number again and again
}