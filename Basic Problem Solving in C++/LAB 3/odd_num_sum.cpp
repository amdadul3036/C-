/*
Write a program that uses a WHILE LOOP to calculate the sum of all the odd numbers entered by the user.
Assume the last value read is the sentinel -1.

EXAMPLE:

        Input                           Output
        1 2 3 4 5 6 7 8 9 10 -1           25
        2 4 7 9 12 4 4 7 -1               23
*/

#include <iostream>

using namespace std;

int main()
{
    int *Arr[1000],i=0,sizeofArr=0;
    while(1){
        Arr[i] = new int;
        cin >> *Arr[i];
        if(cin.get() == '\n'){       //It will exit the loop if ENTER is pressed
            break;
        }
        i++;
        sizeofArr++;
    }
    int sum = 0;
    for (int j=0;j<=sizeofArr-1;j++){
        if (*Arr[j] %2 != 0)
        {
            sum = sum + *Arr[j];
        }
    }
    cout << sum;

    return 0;
}

