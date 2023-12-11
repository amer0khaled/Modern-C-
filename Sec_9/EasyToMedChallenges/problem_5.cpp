#include<iostream>
#include<math.h>
using namespace std;

//convert to number

int main()
{
    string str;
    int val = 0, temp = 0;

    cin >> str;

    for(int i = 0, j = (str.size())-1; i < str.size(); ++i, --j)
    {
        temp = ((char)str[i] - 48) * pow((double)10, (double)j);
        val += temp;
    }

    cout << val << " " << (val * 3) << endl;

    return 0;
}