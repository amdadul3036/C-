// Section 9
// While Loop
#include <iostream>

using namespace std;

int main() {
  
   int number {};

   cout << "Enter an integer less than 100: ";
   cin >> number;

   while (number >= 100) {  // !(number < 100)
       cout << "Enter an integer less than 100: ";
       cin >> number;
   }

   cout << "Thanks" << endl;  
    
    return 0;
}

