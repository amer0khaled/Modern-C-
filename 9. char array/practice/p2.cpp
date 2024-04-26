#include <iostream>
using namespace std;

unsigned char freq[26] {};

int main() {

    string s;

    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {

        switch (s[i]) {
        case 'a' ... 'z':
            freq[s[i] - 'a']++;
            break;
        
        default:
            break;
        }

    }

    for (int i = 0; i <= 'z' - 'a'; ++i) {
        if (freq[i])
            cout << (char)(i + 'a') << "->" << (int)freq[i] << "\n";
    }

    return 0;
}