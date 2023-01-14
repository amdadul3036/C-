#include<iostream>
using namespace std;

int main(){
    int A[5] = {357,18,5,34,43};

    int min = A[0];
    for (int j = 0; j < 5; j++)
    {
        if (A[j]<=A[0])
        {
            min=A[j];
        }
        
    }
    cout << "Smallest Element of the array is: "<< min << endl; 
}