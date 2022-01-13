#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int n = 0;
        cin >> n;

        int answer = 1;

        for (int i = 0; i < n; i++) {
            int num = 1;
            cin >> num;
            answer *= num % 10;
            answer = answer % 10;
        }

        cout << answer << endl;
    }
}

