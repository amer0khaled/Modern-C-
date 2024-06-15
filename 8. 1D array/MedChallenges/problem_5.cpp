#include<iostream>
using namespace std;

//size 13
//1 5 5 2 5 7 2 3 3 3 5 2 7
//1 5 5 2 5 7 2 3 3 3 5 2 7

int Database[501];

int main()
{
    int size;
    cin >> size;

    int val;

    for(int i = 0; i < size; ++i)
    {
        cin >> val;

        if(Database[val] != 1)
        {
            Database[val] = 1;
            cout << val << " ";
        }
    }

   
    return 0;
}