#include<iostream>
using namespace std;


int main()
{
    int size;
    int i , j;
    int sum = INT32_MAX;

    cin >> size;

    int arr[200] = {0};

    for(int i = 0; i < size; ++i)
        cin >> arr[i];

    for(i = 0, j = size-1; i <= size/2; ++i, --j)
    {
        for(int j = i+1; j < size; j++)
        {
            int result = (arr[i]+arr[j]+j-i);

            if( sum > result )
            {
                sum = result;
            }
        }
    }

    cout << sum << endl;

    
    
    return 0;
}