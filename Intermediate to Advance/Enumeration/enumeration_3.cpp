#include<iostream>
using namespace std;

enum WAPONE 
{
    MISSILE = 5,TORPEDO = 8 , CANNON = 9 ,ANTIAIRCRAFTGUN,RAILGUN  
};

int main(){
    WAPONE Cannon = CANNON;  //9

    cout << Cannon << endl;

}