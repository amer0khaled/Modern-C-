#include <iostream>
using namespace std;

bool is_subsequence(string &s1, string &s2) {

	int s2_next = 0;
	int count = 0;

	for (int i = 0; i < s1.size(); ++i) {
		if (s1[i] == s2[s2_next]) {
			count++;
			s2_next++;
		}
	}

	if (count == s2.size())
		return true;
	return false;
}


int main() {

	string s1, s2;

	cin >>s1 >>s2;

	if (is_subsequence(s1, s2))
		cout << "yes";
	else
		cout << "no";

	return 0;
}