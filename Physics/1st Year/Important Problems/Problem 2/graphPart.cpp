#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

// (a) answer start 

double pi(int n){
    double sum = 0;

    for(int i = 1; i<=n; i++){
        sum = sum + (pow(-1,i)/((2*i)-1));
    }

    return sum*4;
}

// (a) answer End 


// (b) answer start -- 1st Part

int main(){
    ofstream fout("pierror.dat");

    int n;

    cout << "Enter n: ";
    cin >> n; 
     cout<<"The value of PI for the first " << n << " term is " << pi(n) << endl;


     for(n=10;n<=500;n++){
        fout << n << " " << abs(pi(n) - M_PI ) << endl; 
    }
}
