#include<iostream>
using namespace std;

//IS suffix ?

bool is_suffix(string &s1, string &s2) {
	for (int i = s2.size() - 1, j = s1.size() - 1; i >= 0 ; --i, --j) {
		if (s2[i] != s1[j])
			return false;
	}

	return true;
}


/*****************************************************/
int main() {

	string s1, s2;

	cin >> s1 >> s2;

	if (is_suffix(s1, s2))
		cout << "yes";
	else
		cout <<"no";

	return 0;
}