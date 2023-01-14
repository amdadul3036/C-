#include<iostream>
#include<cmath>

using namespace std;

int eps(int i;int j;int k){
    return 0.5*(i-j)*(j-k)*(k-i)
}

int main(){
    int A[3][3] = {0,2,6,1,8,4,5,2,7};
    int det = 0;

    for(int i=0;i<=2;i++){
        for (int j = 0; j <=2; j++)
        {
            for (int k = 0; k <=2; k++)
            {
                det+=eps(i,j,k)*A[0][i]*A[1][j]*A[2][k];
            }
            
        }
        
    }
    cout << "The Determinant of A Matrix is: " << det << endl;
}