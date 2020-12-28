#include <iostream>
using namespace std;


int main(){

    const double BDT_per_Doller {84.83};

    cout << "Welcome to USD to BDT converter" << endl;
    cout << "===============================" << endl;
    cout << "Enter your USD to convert it in BDT: ";

    double USD {0};
    double BDT {0};


    cin >> USD;

    BDT = USD * BDT_per_Doller;

    cout << "Your amount " << USD << " Dollers in BDT is " << BDT <<" Taka " << endl;  
}
