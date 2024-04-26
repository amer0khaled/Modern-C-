#include<iostream>
using namespace std;

//Grouping

int main()
{
    int i = 0, j = 1;
    string str;

    cin >> str;

    while(str[i] != '\0')
    {
        cout << (char)str[i];

        if(str[i] != str[j])
            cout << " ";
        ++i;
        ++j;

    }

    return 0;
}