// Keep calculate the area of triangle untill the user does not press anything other than "Y" or "y"


#include <iostream>
using namespace std;

int main(){

    char selection {};

    do
    {
        double height {} , width {};

        cout << "Enter the height of the tringle: ";
        cin >> height;

        cout << "Enter the width of the tringle: ";
        cin >> width;

        double area = 0.5*height*width;
        cout << " Your Tringle's area is : " << area << endl;

        cout << "Do you want to calculate onother one? (Y/N) : " ;
        cin >> selection;
    } while (selection == 'Y' || selection == 'y' );

     cout << "Thank you!!" ;
    
}