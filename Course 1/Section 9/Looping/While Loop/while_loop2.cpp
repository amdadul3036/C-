// Section 9
// While Loop

#include <iostream>
using namespace std;

int main() {
    
   int num{};
   cout << "Enter a postive integer to count up to: ";
   cin >> num;
   
   int i {1};
   while (num >= i) {
       cout << i << endl;
       i++;
   }
    return 0;
}

