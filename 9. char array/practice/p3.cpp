#include <iostream>
using namespace std;


int main() {

    string mappingChar = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string mappingNum = "!@#$%^&*()";

    string input;

    cin >> input;

    for (int i = 0; i < input.size(); ++i) {
        switch (input[i])
        {
        case 'a' ... 'z':
            input[i] = mappingChar[input[i] - 'a'];
            break;

        case '0' ... '9':
            input[i] = mappingNum[input[i] - '0'];
            break;

        default:
            break;
        }
    }

    cout << input << "\n";

    return 0;
}
