#include <iostream>
#include <cstdlib>  // Because we will use rand() here
#include <ctime>  // Because we will use srand() here

using namespace std;

int main(void)
{
    int a[50], t, c;
    srand(static_cast <unsigned> (time(0)));

        for(int i = 0; i < 50; i++)
        {
            a[i] = (rand() % 50) + 1;
        }


    cout << "Please enter an integer: " ;
    cin >> t ;

        while(t != -1)
        {
            for(int i = 0; i < 50; i++)
            {
                c = 0;
                if(a[i] == t)
                {
                    c = 1;
                    break;
                }

            }
            if(c == 1) {
                cout << "The number is present in the array." << endl ;
            }
            else{
            cout << "The number is not present in the array." << endl;
            }
            cout << "Please enter an integer: " << endl ;
            cin >> t ;
        }
}


//THIS PROBLEM IS LITTLE BIT UNSOLVED TO ME