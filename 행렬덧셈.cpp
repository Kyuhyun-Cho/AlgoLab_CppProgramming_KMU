#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main()
{
    int testCase;
    int x, y;
    ifstream instream;
    instream.open("input.txt");

    instream >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        instream >> x >> y;
        int arrayA[100][100];
        int arrayB[100][100];
        int arrayC[100][100];
        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                instream >> arrayA[j][k];

        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                instream >> arrayB[j][k];

        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                arrayC[j][k] = arrayA[j][k] + arrayB[j][k];

        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                cout << arrayC[j][k]<<" ";
            }
            cout << endl;
        }
    }
    instream.close();

    return 0;
}