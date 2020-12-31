// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/

#include <iostream>
using namespace std;


int main() {

    int total_cents {};

    cout << "Enter your Cents: ";
    cin >> total_cents;

    int dollar_amount;
    dollar_amount = total_cents / 100 ;
    cout << "dollars : " << dollar_amount << endl;


    int after_dollar_amount_having_cents;
    after_dollar_amount_having_cents = total_cents - (dollar_amount * 100) ;
    // cout  << after_dollar_amount_having_cents ;


    int quarters_amount = after_dollar_amount_having_cents / 25 ;
    cout << "quarters : " << quarters_amount << endl ;


    int dimes_amount = (( after_dollar_amount_having_cents % 25 ) / 10 );
    cout << "dimes : " << dimes_amount << endl ;


    int nickels_amount = (total_cents - ((dollar_amount*100)+(quarters_amount*25)+(dimes_amount*10))) / 5 ;
    cout << "nickels : " << nickels_amount << endl ;


    int pennies_amount = total_cents % 5 ;
    cout << "pennies : " << pennies_amount ;


    return 0;
}


