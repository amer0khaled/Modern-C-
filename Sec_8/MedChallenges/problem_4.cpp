#include<iostream>
using namespace std;

int FreqArr[10];

int main()
{
    int size;
    cin >> size;

    int arr[250];

    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
        int temp = 0;

        while(arr[i] != 0)
        {
            temp = arr[i] % 10;
            arr[i] = arr[i] / 10;

            ++FreqArr[temp];
        }
    }

    for(int i = 0; i < 10; ++i)
        cout << i << " " << FreqArr[i] << endl;
    



    return 0;
}