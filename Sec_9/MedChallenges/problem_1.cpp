#include<iostream>
using namespace std;

//Compressing

int main()
{
    int i = 0;
    int counter = 1;
    string str;

    cin >> str;

    while(str[i] != 0)
    {
        if(str[i] == str[i+1])
        {
            ++counter;
        }
        else
        {
            if(str[i+1] != '\0')
                cout << (char)str[i] << counter << "_";
            else
                cout << (char)str[i] << counter;
             
             counter = 1;
        }
        ++i;
    }

    return 0;
}