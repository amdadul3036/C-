#include <iostream>
using namespace std;

int main()
{
    long long n, r;
    int i;

    // cout << "Enter the number : ";
    
    while(1)
    {
        cin >> n;

        if (n==-1)
        {
            break;
        }
        else
        {
            r=1;
            for(i=n; i>=1; i--)
            {
                r = r*i;
            }
        }
        cout << r << "\n"; 
    }

    return 0;
}
