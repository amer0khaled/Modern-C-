#include <iostream>

//find mountains >> nums that greater than it's 8 neighbours

//right -   left    -   up  -   down    -   up right    -   up left -   down right  -   down left


//directional array
int di[] {0, 0, -1, 1, -1, -1, 1, 1};
int dj[] {1, -1, 0, 0, 1, -1, 1, -1}; 


int main()
{
    int rows, cols, flag = true;
    std:: cin >> rows >> cols;

    int arr[rows][cols];

    //read an array 2D
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
            std:: cin >> arr[i][j]; 
    }

    //find mountains
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            flag = true;

            //check my neighbours
            for(int k = 0; k < 8; ++k)
            {
                int ni = i + di[k];
                int nj = j + dj[k];

                //check if neighbour is outside the grid
                if(ni < 0 || ni >= rows || nj < 0 || nj >= cols)
                    continue;

                //if any neighbour is greater than my value
                if(arr[i][j] <= arr[ni][nj]) 
                {
                    flag = false;
                    break;
                }
            }

            if(flag)
                std:: cout << i << " " << j << "\n";
        }
    }

    return 0;
}