// Add the first n number of natural number

#include <iostream>

using namespace std;

int main() {
    int n , sum {};

    cout << "Input limit:" ;
    cin >> n;

    for (int i = 0; i <= n; ++i) // Local Decl.
        sum += i;
        cout << "Sum of " << n << " numbers is: " << sum << endl;
    return 0;
}