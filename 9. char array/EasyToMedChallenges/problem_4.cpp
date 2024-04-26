#include<iostream>
using namespace std;

//Sub sequence?

int main()
{
    string str1, str2;
    int counter = 0;

    cin >> str1 >> str2;

    if(str2.size() > str1.size())
    {
        cout << "NO\n";
        return 0;
    }

    for(int i = 0; i < str1.size(); ++i)
    {
       if(str1[i] == str2[counter])
       {
            ++counter;
            if(counter == str2.size())
            {
                cout << "YES\n";
                return 0;
            }
       }
    }

   cout << "NO\n";
    return 0;

}