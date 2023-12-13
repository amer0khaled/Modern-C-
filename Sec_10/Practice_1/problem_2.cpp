#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int left_diagonal   = 0;
    int right_diagonal  = 0;
    int sum_of_last_row = 0;
    int sum_of_last_col = 0;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];

            if(i == j)
                left_diagonal += arr[i][j];

            /* If you use i + j == row, 
            it would give incorrect results for the right diagonal sum in a square matrix.*/
            if(i+j == col - 1)
                right_diagonal += arr[i][j];

            if(i == row-1)
                sum_of_last_row += arr[i][j];

            if(j == col-1)
                sum_of_last_col += arr[i][j];
        }
    }

    cout << left_diagonal << " " << right_diagonal << endl;
    cout << sum_of_last_row << " " << sum_of_last_col << endl;


   
    return 0;
}