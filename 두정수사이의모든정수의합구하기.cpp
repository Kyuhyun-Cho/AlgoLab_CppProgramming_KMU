#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int num1 = 0;
        int num2 = 0;
        cin >> num1;
        cin >> num2;

        if (num1 > num2) {
            int tmp = num1;
            num1 = num2;
            num2 = tmp;
        }

        int sum = 0;

        for (num1; num1 <= num2; num1++) {
            sum += num1;
        }

        cout << sum << endl;
    }
}