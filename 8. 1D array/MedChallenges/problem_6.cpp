#include<iostream>
using namespace std;

//sorting numbers
//bubble sort

int main()
{

    int size;
    cin >> size;

    int arr[900];

    for(int i = 0; i < size; ++i)
        cin >> arr[i];

    for(int i = 0; i < size-1; ++i)
    {
        for(int j = 0; j < size-i-1; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";



    return 0;
}