
#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double hermite(double x, int n){
    if (n == 0) return 1;
    else if (n == 1) return 2*x; 

    else return ((2*x*hermite(x, n-1)) - (2*(n-1)*hermite(x, n-2)));
}

int main(){
    ofstream fout("Hermite.dat");
    for (double x = -3; x <= 3; x+=0.01)  // Question e bola nai koto kore increament korbo tai 0.01 kore korlum hehe
    {
        fout << x << " " << hermite(x,0) <<" "<< hermite(x,1) <<" "<< hermite(x,2) <<" "<< hermite(x,3) <<" "<< hermite(x,4) << endl; 
    }
    
    return 0; 
}