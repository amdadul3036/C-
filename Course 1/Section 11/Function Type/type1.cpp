// No return and No arguments 
// Funtion structure given below...

/*
void function_name(void){
    //code
}
*/


#include <iostream>
using namespace std;


void square (void){  // Look there is no parameter here because we used here "void" and there is no return type also such as int , float , char etc. there have "void";
    
    int number ;
    int answer = number * number ;

    cout << "The square of " << number << " is " << answer << endl; 
}

int main(){

    square();
}