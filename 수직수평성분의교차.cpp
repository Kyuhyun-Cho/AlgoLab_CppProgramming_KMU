#include<iostream>


using namespace std;

int area(int a_x, int a_y, int b_x, int b_y, int c_x, int c_y);

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int x1, x2, y1, y2;
        int x3, x4, y3, y4;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;

        int area1 = area(x1, y1, x2, y2, x3, y3) * area(x1, y1, x2, y2, x4, y4);
        int area2 = area(x3, y3, x4, y4, x1, y1) * area(x3, y3, x4, y4, x2, y2);

        int flag;

        if (area1 < 0 && area2 < 0) flag = 1;
        else if (area1 <= 0 && area2 <= 0) flag = 2;
        else flag = 0;

        cout << flag << endl;
    }
}

int area(int a_x, int a_y, int b_x, int b_y, int c_x, int c_y) {
    return (a_x * b_y + b_x * c_y + c_x * a_y - a_y * b_x - b_y * c_x - c_y * a_x) / 2;
}