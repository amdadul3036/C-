#include<iostream>
using namespace std;

int main(){
    int A[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element of index number " << i << ": "; 
        cin >> A[i];
    }

    for (int i = 0; i < 5; i++){
        cout << "A={"<< A[i]<<"}";
    }
    
}