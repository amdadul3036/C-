#include<iostream>
using namespace std;

enum WAPONE //Generally the name of Enumeration be CAPITALIZED
{
    MISSILE,TORPEDO,CANNON,ANTIAIRCRAFTGUN,RAILGUN  //This elements are known as "Enumerator". Last one do not have any comma
};

int main(){
    //There are three types of expression for Enumeration such as - 

    WAPONE Messile = MISSILE;
    WAPONE Torpedo(TORPEDO);
    WAPONE Cannon{CANNON};
}