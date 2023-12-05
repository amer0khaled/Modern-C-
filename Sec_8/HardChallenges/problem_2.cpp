#include<iostream>
using namespace std;

//fixed sliding window

//solution no.1

/*
int main()
{
    int list_size, window_size;
    int sum = 0;
    int max = INT32_MIN;
    int first, second;

    cin >> list_size >> window_size;

    int list[200];

    for(int i = 0; i < list_size; ++i)
        cin >> list[i];
      
    for(int i = 0; i < list_size - window_size + 1; ++i)
    {
        sum = 0;

        for(int j = 0; j < window_size; ++j)
        {
            sum += list[i+j];

            if(sum > max)
            {
                max = sum;
                first = i;
            }
        }
    }

    cout << first << " " << (first+window_size-1) << " << " << max << endl;

    return 0;
}
*/


//solution no.2

int main()
{

    int list_size, window_size;
    int left, right, MaxLeft;
    int max = INT32_MIN;
    int sum = 0;

    cin >> list_size >> window_size;

    int list[list_size];

    for(int i = 0; i < list_size; ++i)
    {
        cin >> list[i];
    }

    left = 0;
    right = window_size - 1;

    while(right < list_size)
    {
        sum = 0;
        for(int i = left; i <= right; ++i)
        {
            sum += list[i];
        }

        if(sum > max)
        {
            max = sum;
            MaxLeft = left;
        }

        left++;
        right++;
         
    }

    cout << MaxLeft << " " << (MaxLeft + window_size - 1) << "  " << max;










    return 0;
}