#include <iostream>
using namespace std;

//get sum of left, right diagonal and last row, column
int main()
{
    int r , c, left_diag = 0, right_diag = 0, last_col = 0, last_row = 0;

    cin >> r >> c;

    int arr[r][c];

    for(int i = 0 ; i < r; ++i) {
        for(int j = 0; j < c; ++j)
            cin >> arr[i][j];
    }

    int i = 0, j = 0;
    while (i < r && j < c)
        left_diag += arr[i++][j++]; 

    i = 0, j = c - 1;
    while (i < r && j >= 0)
        right_diag += arr[i++][j--];

    i = 0, j = c - 1;
    while (i < r)
        last_col += arr[i++][j];

    i = r - 1, j = 0;
    while (j < c)
        last_row += arr[i][j++];

    

    cout << left_diag << " " << right_diag << endl;
    cout << last_row << " " << last_col << endl;


    return 0;
}