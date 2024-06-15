#include <iostream>
using namespace std;

//transpose

int main()
{
    int row, col;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
            cin >>arr[i][j];
    }

    int new_arr[col][row];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            new_arr[j][i] = arr[i][j];
        }
    }

    for(int i = 0; i < col; ++i)
    {
        for(int j = 0; j < row; ++j)
            cout << new_arr[i][j] << " ";

        cout << "\n";
    }

    return 0;
}