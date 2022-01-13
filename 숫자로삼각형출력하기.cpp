#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int k = 0;
        cin >> k;

        for (int j = 1; j <= k; j++) {
            cout << j << " ";

            int val = j;
            int tmp = k;

            for (int l = 1; l < j; l++) {
                val = val + (tmp-1);
                cout << val << " ";
                tmp--;
            }
            cout << endl;
        }
    }
}