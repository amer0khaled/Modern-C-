#include<iostream>
using namespace std;


//size 7
//-1 2 -1 3 -1 5 5

//-1 2 -1 3 -1 5 5 

int counters[250];

int main()
{
    int size;
    cin >> size;

    int arr[250];

    for(int i =0; i < size; ++i)
    {
        cin >> arr[i];
        
    }
    
    int max_occur = -501;

    for(int i = 0; i < size; ++i)
    {
        for(int j = 0; j < size; ++j)
        {

            if(arr[i] == arr[j])
            {
                counters[i]++;
            }
        }

    }

    int max ;
    int indx = INT32_MIN;

    for(int i = 0; i < size; ++i)
    {
        if(indx < counters[i])
        {
            max = arr[i];
            indx = counters[i];
        }
    }

    cout << max << " repeated " << indx << endl;


    return 0;
}
