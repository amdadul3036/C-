// (b) Answer start 

#include<iostream>
#include<cmath>
using namespace std;

double hermite(double x, int n){
    if (n == 0) return 1;
    else if (n == 1) return 2*x; 

    else return ((2*x*hermite(x, n-1)) - (2*(n-1)*hermite(x, n-2)));
}

int main(){
    for(int n=3;n<=5;n++){
    cout<<"H_"<<n<<"(-1) = "<< hermite(-1,n) << endl;
    cout<<"H_"<<n<<"(1) = "<<hermite(1,n) << endl;
    cout<<"H_"<<n<<"(2n) = "<< hermite(0,2*n) << endl;
    cout<<"H_"<<n<<"(2n+1) = "<< hermite(0,((2*n)+1)) << endl;
    };

}