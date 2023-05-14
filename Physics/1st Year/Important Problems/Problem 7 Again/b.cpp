#include<iostream>
#include<cmath>
using namespace std;

double mysqroot(double b, int n){
    if(n==0){
        return 1;
    }
    else{
        return 0.5*((mysqroot(b,n-1))+(b/mysqroot(b,n-1)));
    } 
}

int main(){
    double b = 100.0;

    for(int n=1;n<=20;n++){
        cout << n << " " << abs(mysqroot(b,n-1) - sqrt(b)) << endl;
    }

}