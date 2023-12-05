#include<iostream>
using namespace std;


//Is Prefix ?

int main()
{
    string str1, str2;

    str1 = "ABCDEFG";

    cin >> str2;

    for(int i = 0; i < str2.size(); ++i)
    {
        if(str1[i] != str2[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}