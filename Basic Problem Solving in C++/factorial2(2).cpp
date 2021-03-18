#include <iostream>
using namespace std;

int main()
{
    long long n, r;
    int i;
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
        cout << r << "\n";  //New Line
    }

    return 0;
}
