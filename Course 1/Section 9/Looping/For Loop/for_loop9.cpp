// Section 9
// For Loop
#include <iostream>
#include <vector>

using namespace std;

int main() {

   vector<int> nums { 10,20,30,40,50};
   for (unsigned i{0}; i< nums.size(); ++i)  //Because Vector index starts from 0
       cout << nums[i] << endl;
    
    cout << endl;
    return 0;
}


