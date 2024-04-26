#include<iostream>
using namespace std;

//Is Substring?

int main()
{
    string str1, str2;
    int str1_left = 0;
   
    cin >> str1 >> str2;

    if(str2.size() > str1.size())
    {
        cout << "NO\n" ;
        return 0;
    }

    while(str1[str1_left] != str2[0])
    {
        str1_left++;
    }

    for(int i = 0; i < str2.size(); ++i)
    {
        if(str1[str1_left] != str2[i])
        {
            cout << "NO\n";
            return 0;
        }
        str1_left++;
    }

    cout << "YES" << endl;

    return 0;
}