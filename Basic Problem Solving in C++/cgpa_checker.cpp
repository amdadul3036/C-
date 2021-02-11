#include <iostream>
using namespace std;

int marking_system();
    
int main(){
    int mark , result;

    cout << "Enter your marks : ";
    cin >> mark;

    marking_system();
}

int marking_system(){
    int mark;

    if (mark <=40)
    {
        cout << "Sorry , you are Fail!" << endl;   
    }else if (mark<=44)
    {
        cout << "Your Grade CGPA is 2.00" << endl;
    }else if (mark <= 49)
    {
        cout << "Your CGPA is 2.25" << endl;
    }else if (mark <= 54)
    {
        cout << "Your CGPA is 2.50" << endl;
    }else if (mark <= 59)
    {
        cout << "Your CGPA is 2.75" << endl;
    }else if (mark <= 64)
    {
        cout << "Your CGPA is 3.00" << endl;
    }else if (mark <= 69)
    {
        cout << "Your CGPA is 3.25" << endl;
    }else if (mark <= 74)
    {
        cout << "Your CGPA is 3.50" << endl;
    }else if (mark <= 79)
    {
        cout << "Your CGPA is 3.75" << endl;
    }else if (mark >=80 && mark <= 100)
    {
        cout << "Your CGPA is 4.00" << endl;
    }
}