/*Multiplication of 2 Matrix

CONDITION to Multiply 2 Matrix:

        Multiplication of two Square or Rectangular Matrices:

             1. The number of columns in Matrix-1 must be equal to the number of rows in Matrix-2.
             2. Output of multiplication of Matrix-1 and Matrix-2, results with equal to the number of rows of Matrix-1 and  the number of columns of Matrix-2 i.e. rslt[R1][C2]
*/ 


#include<iostream>
using namespace std;

int main(){
    int matrix1[10][10],matrix2[10][10],product[10][10],ROW1,ROW2,COL1,COL2,i,j,k;

    cout<<"Enter the number of row in matrix1: ";
    cin>>ROW1;
    cout<<endl;
    cout<<"Enter the number of column in matrix1: ";
    cin>>COL1;
    cout<<endl;

    cout<<"Enter the number of row in matrix2: ";
    cin>>ROW2;
    cout<<endl;
    cout<<"Enter the number of column in matrix2: ";
    cin>>COL2;
    cout<<endl;


    cout<<"Enter the elements of matrix1: "<<endl;
    for ( i = 0; i < ROW1; i++)
    {
        for ( j = 0; j < COL1; j++)
        {
            cout<<"Enter the element a"<<i+1<<j+1<<": ";
            cin>>matrix1[i][j];
        }
        
    }

    cout<<"Enter the elements of matrix2: "<<endl;
    for ( i = 0; i < ROW2; i++)
    {
        for ( j = 0; j < COL2; j++)
        {
            cout<<"Enter the element a"<<i+1<<j+1<<": ";
            cin>>matrix2[i][j];
        }
        
    }
    

    //Initialization of multiplication matrix

    for ( i = 0; i < ROW1; i++)
    {
        for ( j = 0; j < COL2; j++)
        {
            product[i][j]=0;
        }
        
    }

    //Multiplying the matrixes

    for ( i = 0; i < ROW1; i++)
    {
        for ( j = 0; j < COL2; j++)
        {
            for ( k = 0; k < COL1; k++)
            {
                product[i][j]+=product[i][k]*product[k][j];
            }
            
        }
        
    }
    

}

