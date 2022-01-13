#include <iostream>

using namespace std;

int main() {
    int testCase = 0;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int numCount = 0;
        cin >> numCount;

        int numList[numCount];

        for (int j = 0; j < numCount; j++) {
            cin >> numList[j];
        }

        int max = numList[0];
        int min = numList[0];

        for (int k = 1 ; k < numCount; k++) {
            if (max < numList[k]) {
                max = numList[k];
            }
            if (min > numList[k]) {
                min = numList[k];
            }
        }

        cout << max << " " << min << endl;
    }
}