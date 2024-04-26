#include<iostream>
using namespace std;

//compare strings

int main()
{
    string str1, str2;
    int counter1 = 0, counter2 = 0, i = 0;


    cin >> str1 >> str2;

    while((str1[i] != 0) || (str2[i] != 0))
    {
        if(str1[i] != 0)
            ++counter1;
        if(str2[i] != 0)
            ++counter2;

        ++i;
    }

    if(counter1 <= counter2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}