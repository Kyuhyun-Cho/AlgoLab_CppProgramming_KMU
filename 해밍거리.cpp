#include<iostream>


using namespace std;

int count_one(int num) {
    int cnt = 0;
    while (num) {
        if (num % 2 == 1)
            cnt++;
        num /= 2;
    }
    return cnt;
}
int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << count_one(num1) << " " << count_one(num2) << " " << count_one(num1 ^ num2) << endl;
    }
}