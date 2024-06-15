#include <iostream>
using namespace std;


//swap 2 columns
int main()
{
    int row, col;
    int c1, c2;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j)
            cin >> arr[i][j];
    }

    cin >> c1 >> c2;

    for(int i = 0; i < row; ++i) {
        int temp   = arr[i][c1];
        arr[i][c1]  = arr[i][c2];
        arr[i][c2]  = temp;
    }

    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < col; ++j)
            cout << arr[i][j] << " ";

        cout << "\n";
    }

    return 0;
}