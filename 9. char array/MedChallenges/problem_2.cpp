#include<iostream>
using namespace std;

//compare strings

bool compare_strings(string &s1, string &s2) {
	int i = 0;
	int len = s1.size() >= s2.size() ? s2.size() : s1.size();

	for (int i = 0; i < len; ++i) {
		if (s1[i] > s2[i])
			return false;
	}

	return true;
}

int main()
{
   string s1, s2;

	cin >> s1 >> s2;
	if (compare_strings(s1, s2))
		cout << "yes";
	else
		cout << "no";
		
	return 0;
}