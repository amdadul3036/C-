#include <iostream>
#include <vector>
using namespace std;

int main(){

    char select {};
    vector <int> numbers;

    cout << "---------------Enter a selection here---------------" << endl;
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number"<< endl;
    cout << "Q - Quit" << endl;

    cout << "Enter your selection: ";
    cin >> select;


    for(int i = 0 ; i++;){
        if (select == 'P' || select == 'p')
        {
            if (numbers.size() == 0 )
            {
                cout << "Sorry, It's empty [] " << endl;
            }else
            {
                for(auto num: numbers){
                    cout <<" [ " << num <<" " << " ] " << endl;
                }
            }  
            
        }

        else if(select == 'A' || select == 'a'){
            
            int num_to_add;
            cout << "Enter your expected number that you want to add : ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << "You added the numbers: " << num_to_add << "right now!!!" << endl;
        }
        
    }
}