/*
Generate a grade report based on the number given by the user.
0-60 = Fail, 61-70 = C, 71-80 = B, 81-90 = A, 91-100 = A+
*/


#include <iostream>
using namespace std;


int marks;
void grading_system();

int main(){

    cout << "Enter your marks : ";
    cin >> marks;

    grading_system();
}

void grading_system(){
    if (marks < 0 || marks > 100)
    {
        cout << "Sorry , the marking system works between 0 to 100. Enter the valid marks. Thank you!" << endl;
    }else
    {
            if (marks <= 60)
        {
            cout << "Sorry , you are Fail" << endl;
        }else if (marks <= 70)
        {
            cout << "Your grade is C" << endl;
        }else if (marks <= 80)
        {
            cout << "Your grade is B" << endl;
        }else if (marks <= 90)
        {
            cout << "Your grade is A" << endl;
        }else if (marks <= 100)
        {
            cout << "Your grade is A+" << endl;
        }
    }
    
    
    
}