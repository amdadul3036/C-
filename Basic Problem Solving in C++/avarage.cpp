/*
Find out the average of the given numbers from the user. Assume that user will input -1 to
terminate the number series.

   Input          Output
5 8 7 -1          6.67
1 9 10 20 -1       10
*/

#include <iostream>
using namespace std;

int main(){

    double number , average , total;
    int count {} , i;

    for (i=1;i<=1000;++i)
    {
        cout << "Enter your " << i << " number : "  << endl;
        cin >> number;

        total = count + number;
        average = total/i;
         cout << "Average : " << average << endl;
    }
        return 0;
}