#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool check(const string& s) {
    const string opened = "({[";
    const string closed = ")}]";
    stack<char> st;

    for (const auto &c : s) {
        if (opened.find(c) != -1) {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }
            if (opened.find(st.top()) != closed.find(c)) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    int testCase;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        string parentheses;
        cin >> parentheses;

        if (check(parentheses)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
