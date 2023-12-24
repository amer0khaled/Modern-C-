#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n , m, left_diag = 0, right_diag = 0, last_col = 0, last_row = 0;

    cin >> n >>m;

    int arr[n][m];

    for(int i = 0 ; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];

            //calculate left diagonal
            if(i == j)
                left_diag += arr[i][j];

            if(i+j == m-1)
                right_diag += arr[i][j];

            if(j == m-1)
                last_col += arr[i][j];

            if(i == n-1)
                last_row += arr[i][j];
        }
    }

    cout << left_diag << " " << right_diag << endl;
    cout << last_row << " " << last_col << endl;


    return 0;
}