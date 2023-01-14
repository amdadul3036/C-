#include<iostream>
using namespace std;

int main(){
    int A[5], i;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element of index number " << i << ": "; 
        cin >> A[i];

        int min = A[0];
    for (int j = 0; j < 5; j++)
    {
        if (A[i]<=A[0])
        {
            min=A[i];
        }
    }
    }
    cout<< "Smallest Element of Array A is: "<< min << endl; 
}