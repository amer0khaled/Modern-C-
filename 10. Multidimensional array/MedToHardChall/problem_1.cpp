#include <iostream>

//How many primes in sub-square


int main()
{
     int rows, cols, counter = 0, flag = true;

    std:: cin >> rows >> cols;

    int arr[rows][cols];

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            std:: cin >> arr[i][j];


            //replace not primes with 0
            
            if(arr[i][j] <= 1) //not prime
            {
                arr[i][j] = 0; // replace the value with 0
                continue;
            }

            for(int k = 2; k < arr[i][j]/2; ++k)
            {
                if(arr[i][j] % k == 0) //not prime
                {
                    arr[i][j] = 0; // replace the value with 0
                    break;
                }
            }
        }
    }


    int row1, col1, UserRows, UserCols, q;

    std:: cin >> q;

    while(q--)
    {
        std:: cin >> row1 >> col1 >> UserRows >> UserCols;

        for(int i = 0; i < UserRows; ++i)
        {
            for(int j = 0; j < UserCols; ++j)
            {
                if(arr[i][j] != 0)
                    counter++;
            }
        }

        std:: cout << counter << "\n";
         counter = 0;

    }

    return 0;

}




/*

//this solution is true but very slow

int main()
{
    int rows, cols, counter = 0;

    std:: cin >> rows >> cols;

    int arr[rows][cols];

    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
            std:: cin >> arr[i][j];
    }

    int row1, col1, UserRows, UserCols, q;

    std:: cin >> q;

    while(q--)
    {
        std:: cin >> row1 >> col1 >> UserRows >> UserCols;
        counter = 1;

        for(int i = row1; i < UserRows; ++i)
        {
            
            for(int j = col1; j < UserCols; ++j)
            {
                int flag = false;
                //check primes
                for(int w = 2; w <= arr[i][j]/2; ++w)
                {
                    if(arr[i][j] % w == 0)
                    {
                        flag = true;
                        break;
                    }
                }

                if(flag == false)
                    counter++;

            }
        }

        std:: cout << counter << "\n" ;

    }


    return 0;

}

*/