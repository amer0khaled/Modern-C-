#include<iostream>
using namespace std;

//IS suffix ?

int main()
{
    string str1, str2;

    str1 = "ABCDEFG";

    cin >> str2;

    for(int i = (str1.size()) - 1, j = (str2.size()) - 1; j >= 0; --i, --j)
    {
        if(str1[i] != str2[j])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}