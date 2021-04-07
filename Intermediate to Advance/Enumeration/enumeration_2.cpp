#include<iostream>
using namespace std;

enum WAPONE 
{
    MISSILE = 5,TORPEDO = 8 , CANNON = 9 ,ANTIAIRCRAFTGUN,RAILGUN  
};

int main(){

    int Missilevalue;

    // WAPONE Missile = MISSILE;

    // cin >> Missile; //It will give an error. Because we cannot input value in this way in Enumeration

    cin >> Missilevalue;

    WAPONE Missile_2 = static_cast<WAPONE>(Missilevalue);

    cout << Missile_2;
}