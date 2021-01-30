#include <iostream>
#include <cmath>
using namespace std;

int conditions(float a);
int areas();

int main()
{
   areas();
   return 0;
}

int areas(){
   float radius{}, area{};
   cout << "Enter the radius of circle : ";
   cin >> radius;

   area = 3.14 * pow(radius,2);
   cout << "Area of circle is: " << area << endl;
   conditions(area);

}

int conditions(float a)
{
    if(a<25)
    {
        cout << "Area is less than 25 because it is " <<   a << " square unit . " << endl;
    }
    else if(a>25)
    {
        cout << "Area is greater than 25 because it is " << a << " square unit ." << endl;
    }
}