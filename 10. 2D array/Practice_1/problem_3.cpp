#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int n, m;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }

    cin >> n >> m;

    for(int i = 0; i < row; ++i)
    {
        int temp   = arr[i][n];
        arr[i][n]  = arr[i][m];
        arr[i][m]  = temp;
    }

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }




    return 0;
}