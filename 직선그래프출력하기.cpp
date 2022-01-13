#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int k = 0;
        cin >> k;
        int n = k/2 - 1;

        for (int i = 0; i < k/2; i++) {
            int m = k/2 - n - 1;

            for (int i = 0; i < k/2; i++) {
                cout << ".";
            }

            cout << 'I';

            for (int i = 0; i < n; i++) {
                cout << ".";
            }

            cout << "*";

            for (int i = 0; i < m; i++) {
                cout << ".";
            }

            cout << "\n";
            n--;
        }

        for (int i = 0; i < k/2; i++) {
            cout << "+";
        }

        cout << "O";

        for (int i = 0; i < k/2; i++) {
            cout << "+";
        }

        cout << "\n";

        n++;

        for (int i = 0; i < k/2; i++) {
            int m = k/2 - n - 1;

            for (int i = 0; i < m; i++) {
                cout << ".";
            }

            cout << "*";

            for (int i = 0; i < n; i++) {
                cout << ".";
            }

            cout << "I";

            for (int i = 0; i < k/2; i++) {
                cout << ".";
            }

            cout << "\n";
            n++;
        }
    }
}
