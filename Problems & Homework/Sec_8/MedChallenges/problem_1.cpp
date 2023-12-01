#include <iostream>
using namespace std;

int mini[3];

void BubbleSort(int * arr, int n)
{
    for(int i = 0; i < n -1; ++i)
    {
        for(int j = 0; j < n-1-i; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]   = arr[j+1];
                arr[j+1]   = temp;
            }
        }
    }
}



int main()
{
    int size;
    int value;
    int  max_pos = 0;
    int j = 0;
  
    //assumption : size >= 3
    cin >> size;

    for(int i = 0; i < size; ++i)
    {
        cin >> value;

        //in case of size = 3
        if(i < 3)
        {
            mini[i] = value;
        }
        else
        {
            //get max value
            for(int i = 0; i < 3; ++i)   
            {
                if(mini[max_pos] < mini[i])
                    max_pos = i;
            }
            if(value < mini[max_pos])
                mini[max_pos] = value;


        }

    }

    BubbleSort(mini, 3);

    for(int i = 0; i < 3; ++i)
        cout << mini[i] << " ";


    return 0; 
}