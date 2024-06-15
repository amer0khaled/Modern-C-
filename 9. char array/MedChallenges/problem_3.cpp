#include <iostream>
#include <math.h>
using namespace std;

//Add 5555
string add9999(string &s) {

	int carry = 0;
	int digit = 0;

	for (int i = s.size() - 1; i >= s.size() - 4; --i) {

		//get digit
		digit = s[i] - '0' + carry;

		if (digit + 5 > 9) {
			s[i] = (digit + 5) - 10 + '0';
			carry = 1;
		}
		else {
			s[i] = digit + 5 + '0';
			carry = 0;
		}
	}

	return s;
}


int main() {

	string s1, s2;

	cin >>s1;

	cout << add9999(s1);

	return 0;
}