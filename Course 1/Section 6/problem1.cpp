// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
 
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include<iostream>
using namespace std;

int main(){
    int number_of_small_room {0};
    int number_of_large_room {0};
    int price_per_small_room {25};
    int price_per_large_room {35};
    float tax_per_room {0.06};

    std::cout<<"Enter the number of samll rooms you want: "<<endl;
    std::cin>>number_of_small_room;
    std::cout<<"Enter the number of large rooms you want: "<<endl;
    std::cin>>number_of_large_room;

    std::cout<<"Number of small rooms: "<<number_of_small_room<<endl;
    std::cout<<"Number of large rooms: "<<number_of_large_room<<endl;
    std::cout<<"Price per small room: "<<"$"<<price_per_small_room<<endl;
    std::cout<<"Price per large room: "<<"$"<<price_per_large_room<<endl;


        int cost_without_tax {((price_per_large_room*number_of_large_room)+(price_per_small_room*number_of_small_room))};

    std::cout<<"Cost : "<<"$"<<cost_without_tax<<endl;

        float total_tax {tax_per_room*cost_without_tax};

    std::cout<<"Tax: "<<"$"<<total_tax<<endl;
    std::cout<<"==============================="<<endl;
    std::cout<<"Total estimate: "<<"$"<<(cost_without_tax+total_tax)<<endl;
    std::cout<<"This estimateis valid for 30 days"<<endl;
}