#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream fin;
    fin.open("input.txt");
    int testCase;
    fin >> testCase;
    for (int t = 0;t < testCase; t++) {
        int n;
        fin >> n;
        int * arr = new int[n+1];
        int * accumulated_sum = new int[n+1];
        accumulated_sum[0] = 0;
        for (int i = 1;i <= n;i++) {
            fin >> arr[i];
            accumulated_sum[i] = accumulated_sum[i - 1] + arr[i];
        }
        int k;
        fin >> k;
        cout << n - k + 1 << " ";
        for (int i = k;i <= n;i++) {
            cout << (accumulated_sum[i] - accumulated_sum[i - k]) / k << " ";
        }
        cout << endl;
        delete[] arr;
        delete[] accumulated_sum;
    }
    fin.close();
    return 0;
}