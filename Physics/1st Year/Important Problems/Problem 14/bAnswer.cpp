#include<iostream>
#include<cmath>
using namespace std;

double legend(double x, int n){
    if(n==0) return 1;
    else if(n==1) return x;

    else return (((((2*n) -  1)*x*legend(x, n-1)) - (((n-1)*legend(x, n-2))))/n);
}

int main(){
    for(double x = -1; x<=1; x+=0.01){
        cout<< legend(x,0) << " " << legend(x,1) << " " << legend(x,2) << " " << legend(x,3) << " " << legend(x,4) << endl; 
    }

    return 0;
}