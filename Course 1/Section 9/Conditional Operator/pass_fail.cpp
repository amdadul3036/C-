// C++ program to check whether the student is pass or fail using conditional operator

#include <iostream> 
using namespace std;

int main(){

    float marks;
    
    cout << "Enter Your Marks: ";
    cin >> marks;

    
    cout << ((marks > 33) ? "Pass" : "Fail");

    return 0;
}