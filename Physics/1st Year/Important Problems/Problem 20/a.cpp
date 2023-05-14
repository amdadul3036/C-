#include<iostream>
#include<cmath>
using namespace std; 

double myfact(int n){
    double facto = 1.0;

    if(n==0) return 1;
    else{
        for(int i=n;i>=n;i--){
            facto *= n*(n-1);
        }
        return facto;
    }
}

double Ramanujan(int n){
    double facto;

    facto = sqrt(M_PI)*pow(n,n)*exp(-n)*pow(((8*pow(n,3))+(4*pow(n,2))+n+(1/30)),(1/6));
}