#include <iostream>

using namespace std;

int main() {
    int testCase = 0;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int sum = 0;
        int n = 0;
        cin >> n;

        for (int j = 0; j < n; j++) {
            int num = 0;
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
    }
    return 0;
}
