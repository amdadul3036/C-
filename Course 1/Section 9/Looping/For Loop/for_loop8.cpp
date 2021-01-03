// Section 9
// For Loop
#include <iostream>
using namespace std;

int main() {

 for ( int i{1}; i<=100; ++i) {
       cout << i << ( (i % 10 ==0) ? "\n" : " ");
   } 
   
    cout << endl;
    return 0;
}


