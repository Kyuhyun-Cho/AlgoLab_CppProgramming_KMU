#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main(void) {
    ifstream fin;
    fin.open("input.txt");
    int testCase;
    fin >> testCase;
    set < int > tmp_set;
    tmp_set.insert(1);
    set < int >::iterator idx = tmp_set.begin();
    while (tmp_set.size() <= 1500) {
        tmp_set.insert((*idx) * 2);
        tmp_set.insert((*idx) * 3);
        tmp_set.insert((*idx) * 5);
        idx++;
    }
    vector < int > v;
    for (set< int >::iterator i = tmp_set.begin(); i != tmp_set.end();i++)
        v.push_back(*i);
    for (int t = 0;t < testCase;++t) {
        int k;
        fin >> k;
        cout << v.at(k - 1) << endl;
    }
}