#include<iostream>
using namespace std;


int main()
{
    int size;
    int i , j;

    cin >> size;

    int arr[999] = {0};

    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];

    }

    for(i = 0, j = i + 1; (i <= size); ++i, ++j)
    {
        if(arr[i] != arr[j])
        {
            cout << arr[i] << " ";
        }
    }

    
    return 0;
}