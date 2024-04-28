#include<iostream>
using namespace std;


//Is Prefix ?
bool is_prefix(string &s1, string &s2) {
	for (int i = 0; i < s2.size(); ++i) {
		if (s2[i] != s1[i])
			return false;
	}
	return true;
}


int main() {

	string s1, s2;

	cin >> s1 >> s2;

	if (is_prefix(s1, s2))
		cout << "yes";
	else
		cout <<"no";

	return 0;
}