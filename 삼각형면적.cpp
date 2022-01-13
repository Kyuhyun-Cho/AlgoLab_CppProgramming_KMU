#include <iostream>

using namespace std;


int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        double ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;

        double area = ((bx - ax)*(cy - ay) - (cx - ax)*(by - ay)) / 2.0;

        int flag = 0;

        if (area > 0) {
            flag = 1;
        }
        else if (area == 0) {
            flag = 0;
        }
        else if (area < 0) {
            flag = -1;
            area = -area;
        }

        cout << int(area * 2.0) << " " << flag << endl;
    }
}
