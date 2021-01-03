// Section 9
// For Loop
#include <iostream>
#include <vector>

using namespace std;

int main() {


   for ( int i{1}; i<=100; ++i) {
       cout << i;
       if (i % 5 ==0)
           cout << endl;
       else 
           cout << " ";
   }
    

    cout << endl;
    return 0;
}


