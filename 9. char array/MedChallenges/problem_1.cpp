#include<iostream>
using namespace std;

//Compressing

string compressing(string &s) {

	string Nstr;	
	int cnt = 0;

	int i = 0;
	while (s[i] != '\0') {
		++cnt;
		if (s[i] != s[i + 1]) {
			Nstr += s[i];
			Nstr += (char) cnt + '0';

			if (i < s.size() - 1)
				Nstr += "_";

			cnt = 0;
		}
		i++;
	}

	return Nstr;
}


int main() {

	string s1;

	cin >> s1;

	cout << compressing(s1);

	return 0;
}