/*
If a = 20;
b = a ;
Then b = 20 ;

Such we can copy any value. But we cannot copy strings like this as array. That is whay we use "strcpy()".
*/


// Structure of strcpy;

// strcpy (destination , source)

#include <iostream>
#include <cstring> //We need to use <cstring> because we are working with string.

using namespace std;

int main(){

    char name[20];
    char my_name[] {"MD AMDADUL ISLAM"};

    strcpy(name , my_name);

    cout << "name(It's copied): " << name << endl;
    cout << "my_name: " <<  my_name << endl;

    char city[10];
    strcpy(city , "Dhaka");
    cout << "City(It's copied by strcpy): " << city;
    
    return 0;
}