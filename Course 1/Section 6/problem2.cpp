// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
 
Estimate for carpet cleaning service
Number of rooms: 2
Price per room: $30
Cost : $60
Tax: $3.6
===============================
Total estimate: $63.6
This estimate is valid for 30 days
*/


#include<iostream>
using namespace std;

int main(){
    int number_of_room {0};
    int room_charge {30};
    float room_tax {0.06};
    int number_of_days_valid {30};

    std::cout<<"Estimate for carpet cleaning service"<<endl;
    std::cout<<"Enter the number of room you want: "<<endl;
    std::cin>>number_of_room;
    std::cout<<"Number of Room You have entered Just now: "<<number_of_room<<endl;
    std::cout<<"Every Room Charge: "<<"$"<<room_charge<<endl;
    std::cout<<"So your room charge for "<<number_of_room<<" number of rooms is: "<<"$"<<room_charge*number_of_room<<endl;
    std::cout<<"Tax per room: "<<"$"<<room_tax<<endl;
    std::cout<<"So your total room tax for "<<number_of_room<<" number of rooms is: "<<"$"<<room_charge*number_of_room*room_tax<<endl;
    std::cout<<"========================================================"<<endl;
    std::cout<<"Your total rent for: "<< number_of_room << " number of room is" <<" " <<"$"<< ((room_charge*number_of_room) + (room_charge*number_of_room*room_tax)) <<endl;
    std::cout<<"Thank you for your reservation."<<endl;
}