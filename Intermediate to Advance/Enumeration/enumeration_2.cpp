#include<iostream>
using namespace std;

enum WAPONE 
{
    MISSILE = 5,TORPEDO = 8 , CANNON = 9 ,ANTIAIRCRAFTGUN,RAILGUN  
};

int main(){

    WAPONE Missile = MISSILE;

    cin >> Missile; //It will give an error. Because we cannot input value in this way in Enumeration
}