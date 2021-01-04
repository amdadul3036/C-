#include <iostream>
using namespace std;

int main(){

    for(int i=0 ; i++){

        char wish {};
        cout << "This is " << i << "time" << endl;
        cout << "Do you want to run again(Y/N): ";
        cin >> wish;

        if (wish == "N" || wish == "n") //There are some error. Cannot solve right now.
        {
            break;
        } else
        {
            continue;
        }
    }
}

