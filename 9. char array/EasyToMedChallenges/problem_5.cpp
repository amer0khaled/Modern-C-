#include<iostream>
#include<math.h>
using namespace std;

//convert to number

int convert_to_number(string &s) {
	int num = 0;
	for (int i = 0; i < s.size(); ++i) {

		if (s[i] >= '0' && s[i] <= '9') {
			int digit = s[i] - '0';
			num = num * 10 + digit;
		}
		
	}
	return num;
}

int main()
{
    string str;

    int n = convert_to_number(str);   

    cout << n << " -> " << n * 3;

    return 0;
}