#include <iostream>
#include <fstream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("input.txt");
    int testCase;
    fin >> testCase;
    for (int t = 0; t < testCase; t++) {
        int n_a;
        set < int > set_a;
        fin >> n_a;
        for (int i = 0;i<n_a;i++) {
            int num;
            fin >> num;
            set_a.insert(num);
        }
        int n_b;
        set < int > set_b;
        fin >> n_b;
        for (int i = 0;i<n_b;i++) {
            int num;
            fin >> num;
            set_b.insert(num);
        }
        set<int> intersection;
        set<int> cup;
        set<int>  difference_set;
        for (set<int>::iterator i = set_a.begin(); i != set_a.end(); i++) {
            set<int>::iterator finder = set_b.find(*i);
            if (finder != set_b.end())
                intersection.insert(*i);
            else
                difference_set.insert(*i);
            cup.insert(*i);
        }
        for (set<int>::iterator i = set_b.begin(); i != set_b.end();i++) {
            cup.insert(*i);
        }
        cout << intersection.size() << " ";
        for (set<int>::iterator i = intersection.begin(); i != intersection.end(); i++)
            cout << *i << " ";
        cout << endl;
        cout << cup.size() << " ";
        for (set<int>::iterator i = cup.begin(); i != cup.end(); i++)
            cout << *i << " ";
        cout << endl;
        cout << difference_set.size() << " ";
        for (set<int>::iterator i = difference_set.begin(); i != difference_set.end(); i++)
            cout << *i << " ";
        cout << endl;
    }
    return 0;
}
