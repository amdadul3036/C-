/*
Let’s assume there is a player positioned in a field. He can only move Left (L), Right(R), Up (U) or Down (D). He
earns or loses money depending on the path he goes. He earns 10$ if he takes Left (L) and earns 5$ if Down (D).
Again, he loses 8$ for going Right(R) and loses 3$ for going Up (U).

Now, you have to calculate the overall gain or loss of the player from a given path*.
Sample input/output is given below:

        Input:                        Output:
        R R U L L D U L X               13$
        L R U U D R X                   -7$

*Path is terminated if user inputs ‘X’
*/

#include<iostream>
using namespace std;

int rec(){
    int n , sum = 0;

    cout << "Enter Direction : ";

    cin >> n;

    sum = sum + n ;

    rec();
}

int main(){
        int n, L {10},D {5}, R {-8}, U {-3};

        rec();
}