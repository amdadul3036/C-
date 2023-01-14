#include<iostream>
using namespace std;

int main(){
    int A[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element of index number " << i << ": "; 
        cin >> A[i];
    }

    /*for (int i = 0; i < 5; i++){
        cout << "A={"<< A[i]<<"}";
    }*/

    cout << "A={"<<A[0]<<","<<A[1]<<","<<A[2]<<","<<A[3]<<","<<A[4]<<"}"<<endl;
    
}