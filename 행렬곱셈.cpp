#include<iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int r, s, t;
        cin >> r >> s >> t;

        int matrix_a[200][200], matrix_b[200][200], matrix_c[200][200];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++)
                cin >> matrix_a[i][j];
        }

        for (int i = 0; i < s; i++) {
            for (int j = 0; j < t; j++)
                cin >> matrix_b[i][j];
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++) {
                matrix_c[i][j] = 0;
                for (int k = 0; k < s; k++)
                    matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < t; j++)
                cout << matrix_c[i][j] << " ";
            cout << endl;
        }
    }
}