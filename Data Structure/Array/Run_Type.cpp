#include<iostream>
using namespace std;

int main(){
    int arr[100] , size , i ; //Here we are defining the maximum size of array is 100. So user can choose the size of array be him/her but cannot choose more than 100

    cout << "Enter the size of array (Maximum array size you can take is 100) : ";
    cin >> size;

    if (size > 100)
    {
        cout << "You cannot take the size more than 100" << endl;
    }else{
    
        cout << "Inter the elements using space : ";
            for (int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }

        cout << "Elements of array are : ";
            for (int i = 0; i < size; i++)
            {
                arr[i];
            }

        cout << "[" << arr[i] << "]";
        }
    return 0;
}