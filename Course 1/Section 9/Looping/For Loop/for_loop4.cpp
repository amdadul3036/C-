// Section 9
// For Loop
#include <iostream>
using namespace std;

int main() {

   for (int i{10}; i<=100; i+=10) {
       if (i % 15 == 0) 
           cout << i << endl;
   }

    cout << endl;
    return 0;
}


