#include <iostream>

using namespace std;

int eucDis(int x1, int y1, int x2, int y2, int x, int y);
int recDis(int x1, int y1, int x2, int y2, int x, int y);

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        int x1, y1, x2, y2, x, y;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x >> y;

        int euclideanDis;
        int rectilinearDis;
        euclideanDis = eucDis(x1, y1, x2, y2, x, y);
        rectilinearDis = recDis(x1, y1, x2, y2, x, y);

        cout << euclideanDis << " " << rectilinearDis << endl;
    }
}

int eucDis(int x1, int y1, int x2, int y2, int x, int y) {
    if (x < x1 && y > y2) return (x1-x)*(x1-x) + (y2-y)*(y2-y);
    else if (x2 < x && y > y2) return (x2-x)*(x2-x) + (y2-y)*(y2-y);
    else if (x2 < x && y < y1) return (x2-x)*(x2-x) + (y1-y)*(y1-y);
    else if (x < x1 && y < y1) return (x1-x)*(x1-x) + (y1-y)*(y1-y);
    else if (x1 <= x && x <= x2 && y > y2) return (y-y2) * (y-y2);
    else if (x2 < x && y1 <= y && y <= y2) return (x-x2) * (x-x2);
    else if (x1 <= x && x <= x2 && y < y1) return (y1-y) * (y1-y);
    else if (x < x1 && y1 <= y && y <= y2) return (x1-x) * (x1-x);
    else if (x1 <= x && x <= x2 && y1 <= y && y <= y2) return 0;
}

int recDis(int x1, int y1, int x2, int y2, int x, int y) {
    if (x < x1 && y > y2) return (x1-x) + (y-y2);
    else if (x2 < x && y > y2) return (x-x2) + (y-y2);
    else if (x2 < x && y < y1) return (x-x2) + (y1-y);
    else if (x < x1 && y < y1) return (x1-x) + (y1-y);
    else if (x1 <= x && x <= x2 && y > y2) return (y-y2);
    else if (x2 < x && y1 <= y && y <= y2) return (x-x2);
    else if (x1 <= x && x <= x2 && y < y1) return (y1-y);
    else if (x < x1 && y1 <= y && y <= y2) return (x1-x);
    else if (x1 <= x && x <= x2 && y1 <= y && y <= y2) return 0;
}