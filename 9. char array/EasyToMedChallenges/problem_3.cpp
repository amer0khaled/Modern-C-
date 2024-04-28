#include<iostream>
using namespace std;

//Is Substring?

//using sliding window
bool is_substring(string &s1, string &s2) {
	int count = 0;
	int f = 0, l = s2.size() - 1;

	for (int f = 0, l = s2.size() - 1; l < s1.size(); ++f, ++l) {
		if (s1[f] == s2[0]) {
			for (int i = f, j = 0; i <= l; ++i, j++) {
				if (s1[i] != s2[j])
					return false;
			}
		}
	}

	return true;
	
}

int main() {

	string s1, s2;

	cin >> s1 >> s2;

	if (is_substring(s1, s2))
		cout << "yes";
	else
		cout <<"no";

	return 0;
}