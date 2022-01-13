#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int testCase;
    string ISBN;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        cin >> ISBN;
        int A[100] = { 0, };
        char checksum = 0;
        int check = 0;
        int count = 0, one = 0, two = 0, three = 0;
        int sum = 0;
        int k = 0;
        int last = 0;
        int checksum2 = 0;
        vector<char>checkmate;
        if (ISBN.size() != 13) {
            cout << 0 << endl;
            continue;
        }
        for (int j = 0; j < ISBN.size(); j++) {
            checkmate.push_back(ISBN[j]);
            if (count == 3)
                check++;

            if (ISBN[j] == '-')
                count++;

            if (count == 0)
                one++;

            if (count == 1)
                two++;

            if (count == 2)
                three++;

            if (count == 3 && j == (ISBN.size() - 1))
                checksum = ISBN[j];
        }
        checkmate.push_back('-');
        int error = 0;
        for (int j = checkmate.size() - 1; j >0; j--) {
            if (checkmate[j] == '-') {
                if (checkmate[j - 1] != '1' && checkmate[j - 1] != '2' && checkmate[j - 1] != '3' && checkmate[j - 1] != '4' && checkmate[j - 1] != '5' && checkmate[j - 1] != '6'
                     && checkmate[j - 1] != '7' && checkmate[j - 1] != '8' && checkmate[j - 1] != '9' && checkmate[j - 1] != '0' && checkmate[j - 1] != 'X') {
                    error = 1;
                }
            }
        }
        if (error == 1 || one > 5 || two - 1>7 || three - 1>6 || check != 1 || ISBN[0] == '-' || count != 3 || ISBN[ISBN.size() - 1] == '-') {
            cout << 0 << endl;
            continue;
        }
        for (int j = 0; j < ISBN.size() - 1; j++) {
            if (ISBN[j] != '-')
                sum += int(ISBN[j] - 48) * (10 - k), k++;
        }
        while (last <= sum)
            last += 11;
        sum = last - sum;
        if (sum > 9)
            sum %= 11;
        if (checksum == 'X') {
            checksum2 = 10;
            if (checksum2 == sum) {
                cout << 1 << endl;
                continue;
            }
        }
        else {
            checksum2 = int(checksum - 48);
            if (checksum2 == sum) {
                cout << 1 << endl;
                continue;
            }
        }
        cout << 0 << endl;
    }
    return 0;
}