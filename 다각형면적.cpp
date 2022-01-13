#include <iostream>

using namespace std;

int signedArea(int n, int x[], int y[]) {
    int area = 0;
    int tmp = 0;

    for (int i = 0; i < n-1; i++) {
        tmp = (x[i] * y[i+1] - y[i] * x[i+1]);
        area += tmp;
    }
    area += x[n-1] * y[0] - y[n-1] * x[0];
    return area;
}

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int n = 0;
        cin >> n;
        int x[n], y[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }

        int area = signedArea(n, x, y) ;
        int flag = 1;

        if (area < 0) {
            area = -area;
            flag = -flag;
        }

        cout << area << " " << flag << endl;
    }
}