#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;


int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        double ax, ay, bx, by, cx, cy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;

        double A = (bx-ax)*(bx-ax) + (by-ay)*(by-ay);
        double B = (cx-bx)*(cx-bx) + (cy-by)*(cy-by);
        double C = (ax-cx)*(ax-cx) + (ay-cy)*(ay-cy);

        double list[3];
        list[0] = A;
        list[1] = B;
        list[2] = C;

        sort(list, list+3);

        double a = list[0];
        double b = list[1];
        double c = list[2];

        int flag;

        if(sqrt(a) + sqrt(b) <= sqrt(c)) flag = 0;
        else if (a + b == c) flag = 1;
        else if (a + b < c) flag = 2;
        else if (a + b > c) flag = 3;

        cout << flag << endl;
    }
}