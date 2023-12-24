#include <iostream>

#define Right       arr[row][col+1]
#define Down        arr[row+1][col]
#define Diagonal    arr[row+1][col+1]

//Greedy Robot

int main()
{
    int row = 0, col = 0, sum = 0;
    std:: cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < col; ++j)
            std:: cin >> arr[i][j];
    }

    int i = 0, j = 0;

    while((i < row) && (j < col))
    {
        sum += arr[i][j];

        int best_i = -1, best_j = -1;
        int New_Pos;

        //Right is max
        if(j+1 < col)
             New_Pos = arr[i][j+1], best_i = i, best_j = j+1;
       
        //Down is max
        if(i+1 < row)
            if(best_i == -1 || New_Pos < arr[i+1][j])
                New_Pos = arr[i+1][j], best_i = i+1, best_j = j;
       
        //Diagonal element is max
        if( (i+1 < row) && (j+1 < col) )
            if(New_Pos < arr[i+1][j+1])
                New_Pos = arr[i+1][j+1], best_i = i+1, best_j = j+1;

        if(best_i == -1)
            break;
        
        i = best_i, j = best_j;
  
    }

    std:: cout << sum << "\n";

}