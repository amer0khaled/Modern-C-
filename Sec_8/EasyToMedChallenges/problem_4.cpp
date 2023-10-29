#include<iostream>
using namespace std;


int main()
{
    int size;
    int i , j;
    int flag = 0;

    cin >> size;

    int arr[999] = {0};

    for(int i = 0; i < size; ++i)
        cin >> arr[i];

    for(i = 0, j = size-1; i <= size/2; ++i, --j)
    {
        if(arr[i] != arr[j])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    
    return 0;
}