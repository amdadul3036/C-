#include<iostream>
using namespace std;

int main(){
    int A[5];

    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the Index value of " << i << ": ";
        cin>>A[i];
    }

    cout << A[4];
    
}