#include<iostream>
using namespace std;

enum WAPONE //Generally the name of Enumeration be CAPITALIZED
{
    MISSILE = 5,TORPEDO,CANNON = 9 ,ANTIAIRCRAFTGUN,RAILGUN  //This elements are known as "Enumerator".Last one do not have any comma
};

int main(){
    //There are three types of expression for Enumeration such as - 

    WAPONE Messile = MISSILE;
    WAPONE Torpedo(TORPEDO);
    WAPONE Cannon{CANNON};


    cout << Messile; 
    cout << Cannon;
    cout << Torpedo;
}