#include<iostream>
#include<cmath>
using namespace std;

double invtan(double x, int n){
    double result = 0.0;

    for(int i=0;i<=n; i+=1){
        result += pow(-1,i)*pow(x,((2*i)+1))/((2*i)+1);
    }
    return result;
}

int main(){

    for(int n=10;n<=1000;n++){
        cout << n << " " << abs(invtan(1,n) - atan(1)) << endl;
    }
}