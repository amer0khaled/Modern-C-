#include<iostream>
using namespace std;

//Grouping
string grouping(string &s) {
	string Nstr;
	int i = 0;
	for (; i < s.size() - 1; ++i) {
		Nstr += s[i];

		if (s[i] != s[i + 1])
			Nstr += " ";
	}
	Nstr += s[i];

	return Nstr;
}

int main() {

	string s1;

	cin >> s1;

	cout << grouping(s1);

	return 0;
}