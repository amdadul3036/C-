// Solve a problem to determine how many numbers are divisible by 5 and divisible by 7 individually between a range

#include<iostream>
using namespace std;
int divisible(int num1, int num2);

int main(){
    int num1, num2;
    cout <<"Enter starting number : " ;
    cin >> num1 ;
    cout << "Enter ending number : " ;
    cin >> num2 ;
    divisible(num1,num2);
}

int divisible(int num1, int num2){
    int count1 {}, count2 {};

    for (int i = num1; i <= num2; i++)
    {
        if (i % 5 == 0)
        {
            count1++;
        }
        if(i % 7 == 0)
        {
            count2++;
        }
    };

    cout <<"Numbers between " << num1 << " and " << num2 << " are divisible by 5 is " << count1 << " times." << endl;
    cout <<"Numbers between " << num1 << " and " << num2 << " are divisible by 7 is " << count2 << " times." << endl;


    return 0;
}