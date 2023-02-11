#include <iostream>
using namespace std;

const int N = 3; // matrix size

// function to calculate determinant of matrix
double determinant(double mat[N][N], int n) {
    double D = 0;
    double temp[N][N]; // temporary array for storing cofactors
    int sign = 1;
    if (n == 1) {
        return mat[0][0];
    }
    for (int f = 0; f < n; f++) {
        int h = 0, k = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == f) {
                    continue;
                }
                temp[h][k] = mat[i][j];
                k++;
                if (k == n - 1) {
                    h++;
                    k = 0;
                }
            }
        }
        D += sign * mat[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }
    return D;
}

int main() {
    double mat[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    cout << "Determinant of the matrix is: " << determinant(mat, N) << endl;
    return 0;
}
