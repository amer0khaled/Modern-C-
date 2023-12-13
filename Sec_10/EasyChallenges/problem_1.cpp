#include <iostream>
using namespace std;

//Smaller row

int main()
{
    int row, col;
    int n, m, flag;
    int Q;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cin >> Q;

    for(int w = 0; w < Q; ++w)
    {
        
        cin >> n >> m;

        flag = 0;
        for(int i = 0; i < col; ++i)
        {
            if(arr[n-1][i] >= arr[m-1][i])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}