#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int n = 0;
        cin >> n;

        int sum = 0;
        int tmp = 0;

        for (int j = 0; j < n; j++) {
            int H, M, S, h, m ,s = 0;
            cin >> H;
            cin >> M;
            cin >> S;
            cin >> h;
            cin >> m;
            cin >> s;

            tmp = ((h * 60 * 60) + (m * 60) + s) - ((H * 60 * 60) + (M * 60) + S);
            sum += tmp;
        }
        int d, h, m, s = 0;
        s = sum % 60;
        m = sum / 60;
        h = m / 60;
        d = h / 24;
        m = m % 60;
        h = h % 24;

        cout << d << " " << h << " " << m << " " << s << endl;
    }
}