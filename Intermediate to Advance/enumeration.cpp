#include<iostream>
using namespace std;

enum WAPONE //Generally the name of Enumeration be CAPITALIZED
{
    MISSILE = 5,TORPEDO = 8 , CANNON = 9 ,ANTIAIRCRAFTGUN,RAILGUN  //This elements are known as "Enumerator".Last one do not have any comma
};

enum WAPON_2
{
   BOFORRO,
   CANNON_2,
   TORPEDO  //This is an Error because in WAPON enumeration we already have "TORPEDO"; You cannot use it again in another enumeration under same code
};

int main(){
    //There are three types of expression for Enumeration such as --- 

    WAPONE Messile = MISSILE;
    WAPONE Torpedo(TORPEDO);   //This is an Error because in WAPON enumeration we already have "TORPEDO"; You cannot use it again in another enumeration under same code
    WAPONE Cannon{CANNON};


    cout << Messile; 
    cout << Cannon;
    cout << Torpedo;
}