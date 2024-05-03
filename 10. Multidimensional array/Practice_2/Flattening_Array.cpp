#include <iostream>
#include <cmath>
using namespace std;

//flattening an array

int main()
{
   int rows, cols;

   std:: cin >> rows >> cols;

   int arr[rows][cols];

   //read the array elements
   for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j)
        std:: cin >> arr[i][j];
   }

   //Get Position in 1D
   int Row_INdex, Col_INdex;

   std:: cin >> Row_INdex >> Col_INdex;
   int pos_1D = (Row_INdex * cols) + Col_INdex;

   printf("The Element in Row %d ,Col %d in 2D is in << %d in 1D\n\n", Row_INdex, Col_INdex, pos_1D);

   //Get Position in 2D
   int INdex_1D;

   std:: cin >> INdex_1D;
   int row = INdex_1D / cols;
   int col = INdex_1D % cols;

   printf("The Element in Position %d in 1D is in << Row %d ,Col %d in 2D\n\n", INdex_1D, row, col);

    return 0;
}


