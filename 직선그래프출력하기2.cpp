#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int n = 0 ; n < testCase; n++) {
        int k = 0;
        cin >> k;
        for (int i = 1; i <= k; i++) {
            for(int j = 1; j <= k; j++) {
                if (i == k / 2 + 1 && j == k / 2 + 1) {
                    cout << "O";
                }
                else if (j == k / 2 + 1) {
                    cout << "I";
                }
                else if (i == k / 2 + 1) {
                    cout << "+";
                }
                else if (j == k - i + 1) {
                    cout << "*";
                }
                else {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
}