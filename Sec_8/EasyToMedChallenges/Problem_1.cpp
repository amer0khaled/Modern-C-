#include<iostream>
using namespace std;


int main()
{
    int size;
    int Checker_var = INT32_MIN;
    int verification_var = 0;
    cin >> size;

    int arr[200];

    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
        if(Checker_var <= arr[i])
        {
            Checker_var = arr[i];
            ++verification_var;
        }
        else
        {
            break;
        }
    }

    if(verification_var == size)
        cout << "YES" << endl;
    else
        cout << "NO" <<endl;

    


    return 0;
}