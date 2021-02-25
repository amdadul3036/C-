#include<iostream>

using namespace std;

int main(){
    const int MAX_SIZE = 10 ;

    int arr[MAX_SIZE] {};

    cout << "Enter a number : " << endl;

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cin >> arr[i];

        cout << "Your all numbers in an array : " << endl;
            for (int i = 0; i < MAX_SIZE; i++)
            {
                cout << arr[i];
                cout << " ";
            }
    }

    return 0;
}