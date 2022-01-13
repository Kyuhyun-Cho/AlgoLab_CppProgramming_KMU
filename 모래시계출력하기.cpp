#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int k = 0;
        cin >> k;
        int tmp = k;
        for (int i = 1; i <= k/2 + 1; i++) {

            for (int n = 1; n <= (k - tmp) / 2; n++) {
                cout << "-";
            }
            for (int j = 1; j <= tmp; j++) {
                if (j % 2 == 1) {
                        cout << "*";
                }
                else if (j % 2 == 0) {
                        cout << "+";
                }
            }
            for (int m = 1; m <= (k - tmp) / 2; m++) {
                cout << "-";
            }
            tmp -= 2;
            cout << endl;
        }

        tmp += 4;

        for (int i = 1; i <= k/2; i++) {
            for (int n = 1; n <= (k - tmp) / 2; n++) {
                cout << "-";
            }
            for (int j = 1; j <= tmp; j++) {
                if (j % 2 == 1) {
                    cout << "*";
                }
                else if (j % 2 == 0) {
                    cout << "+";
                }
            }
            for (int m = 1; m <= (k - tmp) / 2; m++) {
                cout << "-";
            }
            tmp += 2;
            cout << endl;
        }
    }
}
