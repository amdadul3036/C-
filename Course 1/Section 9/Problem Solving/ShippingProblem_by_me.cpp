/* 
    Shipping cost calculator
    
    Ask the user for package dimension in INCHES
    length, width, height - these should be INTEGERS
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int length {} , width {} , height {}  ;

    double total_price {2.50};

    cout << "Enter Length of your Box in inches: ";
    cin >> length;

    cout << "Enter Width of your Box in inches: ";
    cin >> width;

    cout << "Enter Height of your Box in inches: ";
    cin >> height;


    double total_volume_of_the_box = length *  width * height;


    if (total_volume_of_the_box > 1000 || length > 10 || width > 10 || height > 10)
    {
        cout << "Sorry , We cannot bear your box due to overloaded. Please make your box in less than or equal 1000 cubic inches and dimension should be less than or equal to 10 enchies. Thanks for having us." << endl;

    }else
    {
        if (total_volume_of_the_box > 500  )
        {
            total_price += total_price*0.25;
        }else if (total_volume_of_the_box > 100)
        {
            total_price += total_price*0.1;
        }
        
        cout << fixed << setprecision(2);
        cout << "The Volume of Your Package is : " << total_volume_of_the_box << endl;
        cout << " Total Price : $ " << total_price << endl;
        
    }

    return 0;

}