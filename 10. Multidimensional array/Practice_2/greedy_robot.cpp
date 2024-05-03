#include <iostream>
#include <iomanip>

using namespace std;

//down - right - diagonal(rightDown)
int di[] = {1, 0, 1};
int dj[] = {0, 1, 1};

int main()
{
   int row, col, sum = 0;
   int i = 0, j = 0;

   cin >> row >> col;

   int arr[row][col];
   
   for(i = 0; i < row; ++i) {
    for(j = 0; j < col; ++j)
        cin >> arr[i][j];
   }

     i = 0, j = 0;

   while(i < row && j < col) {
     sum += arr[i][j];

     int next_i = -1, next_j = -1, next_value = arr[0][0];

     for (int d = 0; d < 3; ++d) {
          int ni = i + di[d], nj = j + dj[d];

          if (ni < row && nj < col) {
               if (next_i == -1 || next_value < arr[ni][nj]) {
                    next_value = arr[ni][nj];
                    next_i = ni, next_j = nj;
               }
          }
     }

     if(next_i == -1)
          break;

     i = next_i, j = next_j;

   }

   cout << sum << "\n";

    return 0;
}