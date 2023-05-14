#include<iostream>
using namespace std;

int main(){
    string firstName = "Amdadul";
    string lastName = "Islam";
    cout<<"Using +: "<< firstName + lastName << endl;
    cout<<"Using plus and quotaiton: "<<firstName+" "+lastName<<endl;
    cout<<"Using append(): "<< firstName.append(lastName);
}