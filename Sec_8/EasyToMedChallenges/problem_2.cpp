#include<iostream>
using namespace std;

int main()
{
    int size;
    int max = INT16_MIN;
    int indx_max;
    int min = INT16_MAX;
    int indx_min;

    cin >> size;

    int arr[200] = {0};

    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];

        if(max < arr[i])
        {
            max = arr[i];
        }

        if(min > arr[i])
        {
            min = arr[i];
        }
    }

   
    for(int i = 0; i < size; ++i)
    {
        if(max == arr[i])
        {
            arr[i] = min;
        }
        else if(min == arr[i])
        {
            arr[i] = max;
        }


    }

    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";


    return 0;
}