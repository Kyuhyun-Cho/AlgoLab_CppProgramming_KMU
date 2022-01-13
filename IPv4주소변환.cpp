#include<iostream>
#include<string>

using namespace std;

void string_to_num(int tmp[], unsigned int& num) {
    for (int i = 0; i < 4; i++) {
        num *= 256;
        num += tmp[i];
    }
}

void num_to_string(int tmp[], unsigned int& num) {
    for (int i = 0; i < 4; i++) {
        tmp[3 - i] = num % 256;
        num /= 256;
    }
}

int main() {
    int testCase;
    cin >> testCase;
    for (int i = 0; i < testCase; i++) {
        int k;
        cin >> k;
        if (k == 1) {
            string tmp;
            cin >> tmp;
            unsigned int num=0;
            int arr[4] = { 0, }, cnt = 0;
            string_to_num(arr, num);
            for (int i = 0; i < tmp.length(); i++) {
                if (tmp.at(i) == '.')
                    cnt++;
                else {
                    arr[cnt] *= 10;
                    arr[cnt] += tmp.at(i) - '0';
                }
            }
            string_to_num(arr, num);
            cout << num << endl;
        }
        else {
            unsigned int num;
            int arr[4];
            cin >> num;
            num_to_string(arr, num);
            cout << arr[0] << "." << arr[1] << "." << arr[2] << "." << arr[3] << endl;
        }
    }
}