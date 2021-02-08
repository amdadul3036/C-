#include<iostream>
using namespace std;

int main(){
    int arr[100] , size , i , num ; //Here we are defining the maximum size of array is 100. So user can choose the size of array by him/her but cannot choose more than 100

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

        cout << "Enter data you want to insert : ";
        cin >> num;
            for (int i = size - 1 ; i >= 0 ; i--)
            {
                arr[i+1] = arr[i];
            }
        arr[0] = num;
        size++;
        }

        cout << arr[i] << endl;
    return 0;
}