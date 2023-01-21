// Sum 2 Matrix


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int M1 [10] [10], M2 [10] [10], SUM [10] [10];
    int ROW,COL,i,j;

    cout<<"Enter the number of Row: ";
    cin>>ROW;
    cout<<endl;

    cout<<"Enter the number of Column: ";
    cin>>COL;
    cout<<endl;

    cout<<"Enter the elements of the first matrix: "<<endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin>>M1 [i] [j];
        }
        
    }


    cout<<"Enter the elements of the Second matrix: "<<endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin>>M2 [i] [j];
        }
        
    }
    

    //SUM
    cout<<"Sum Will Be Printed here: "<< endl; 
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            SUM [i] [j] = M1 [i] [j] + M2 [i] [j];
            cout<<SUM [i] [j]<<" "<<endl;
            }
            cout<<endl; 
    }

    return 0;
}