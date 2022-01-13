#include <iostream>

using namespace std;


int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int a, b, c;
        cin >> a >> b >> c;

        int flag;

        if (a + b <= c || b + c <= a || c + a <= a) flag = 0;
        else if (a == b && b == c) flag = 1;
        else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b) flag = 2;
        else if (a == b || b == c || c == a) flag = 3;
        else flag = 4;

        cout << flag << endl;
    }
}