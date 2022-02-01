#include<iostream>
#include<cmath>
using namespace std;

double zeta(int s){
    double sum1 = 0;

    for(int n=1;n<=30;n++){
            sum1 = sum1+pow(s,-n);
    }
    return sum1; 
}

double gamma()