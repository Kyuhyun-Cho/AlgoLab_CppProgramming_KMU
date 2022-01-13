#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int num = 0;
        cin >> num;

        int flag = 1;
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
        cout << flag << endl;
    }
}