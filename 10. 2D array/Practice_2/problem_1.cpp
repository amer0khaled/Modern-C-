#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int row, col, sum = 0;
   int i = 0, j = 0;

   cin >> row >> col;

   int arr[row][col];
   
   for(i = 0; i < row; ++i)
   {
    for(j = 0; j < col; ++j)
        cin >> arr[i][j];
   }

     i = 0, j = 0;

   while(i < row && j < col)
   {
     int next_i = -1, next_j = -1, next_value;

     sum += arr[i][j];

     //check the right movement
     if(j+1 < col)
          next_i = i, next_j = j+1, next_value = arr[i][j+1];

     //check the down movement
     if(i+1 < row)
     {
          /*check on (next_i == -1) to decide whether the previous condition was valid or not if not ,then initialize the next_value*/
          if((next_i == -1) || (arr[i+1][j] > next_value))
               next_i = i+1, next_j = j, next_value = arr[i+1][j];
     }

     //check the diagonally movement
     if(i+1 < row && j+1 < col)
     {
          if((next_i == -1) || (arr[i+1][j+1] > next_value))
               next_i = i+1, next_j = j+1, next_value = arr[i+1][j+1];
     }

     if(next_i == -1)
          break;

     i = next_i, j = next_j;
   }

   cout << sum << "\n";

    return 0;
}