#include <iostream>
using namespace std;

bool starts_with(string input, string pattern, int pos)
{
    int pattern_size = pattern.size();
    int input_size = input.size();

    if( (pattern_size + pos > input_size) || (pos > input_size - 1))
        return false;

    for(int i = 0; i < (int)pattern_size; ++i)
    {
        if(input[i + pos] != pattern[i])
            return false;
    }
    return true;
}

string replace_str(string input, string pattern, string to)
{

    string res = "";

    for(int pos = 0; pos < input.size(); ++pos)
    {
        if(starts_with(input, pattern, pos) == true)
        {
            res += to;
            pos += pattern.size() - 1;
        }
        else
            res += input[pos];
    }

    return res;
}


int main()
{
    cout << starts_with("aabcabaaad", "aa", 0) << "\n";
	cout << starts_with("aabcabaaad", "aa", 1) << "\n";
	cout << starts_with("aabcabaaad", "aabcabaaad", 0) << "\n";
	cout << starts_with("aabcabaaad", "baaad", 5) << "\n";
	cout << starts_with("aabcabaaad", "baaad", 4) << "\n";

	cout << replace_str("aabcabaaad", "aa", "x") << "\n";
	cout << replace_str("aabcabaaad", "aa", "aaaa") << "\n";
	cout << replace_str("aabcabaaad", "aa", "") << "\n";


 
    return 0;
}
