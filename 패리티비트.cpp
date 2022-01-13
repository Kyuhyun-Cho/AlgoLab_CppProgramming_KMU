#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    unsigned int bit[32];
    bit[0] = 1;

    for(int i = 1; i < 32; i++)
        bit[i] = bit[i-1] * 2;

    for(int t = 0; t < testCase; t++) {
        int n;
        cin >> n;

        bool nBinary[32] = {false};
        int cnt = 0;

        for(int i = 31; n != 0; i--){
            nBinary[i] = n % 2;
            n /= 2;
        }

        unsigned int sum = 0;
        for(int i = 0; i < 32; i++){
            if(nBinary[i] == true){
                sum += bit[31-i];
                cnt++;
            }
        }

        if(cnt % 2 == 1)
            sum += bit[31];

        cout << sum << endl;
    }
}
