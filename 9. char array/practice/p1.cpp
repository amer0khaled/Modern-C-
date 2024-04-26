#include<iostream>
using namespace std;

int main() {

    string s, t;

    getline (cin , s);
    getline(cin, t);

    int len = s.size() >= t.size() ? s.size() : t.size();
    string n;

    for (int i = 0; i < len; ++i) {
        if (i < s.size())
            n += s[i];
        if (i < t.size())
            n += t[i];
    }

    cout << n;


    return 0;
}