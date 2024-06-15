#include <iostream>

//How many primes in sub-square

bool check_prime(int x) {
    if (x <= 1)
        return false;
    else {
        for (int i = 2; i < x / 2; ++i) {
            if (x % i == 0)
                return false;
        }
    }

    return true;
}

int main()
{
     int rows, cols, counter = 0, flag = true;

    std:: cin >> rows >> cols;

    int arr[rows][cols];
    int helping_arr[rows][cols];

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {

            std:: cin >> arr[i][j];

            bool is_prime = check_prime(arr[i][j]);

            if (is_prime)
                helping_arr[i][j] = 1;
            else
                helping_arr[i][j] = 0;
        }
    }


    int row1, col1, UserRows, UserCols, q;

    std:: cin >> q;

    while(q--)
    {
        std:: cin >> row1 >> col1 >> UserRows >> UserCols;

        for(int i = 0; i < UserRows; ++i) {
            for(int j = 0; j < UserCols; ++j) {
                if(helping_arr[i][j] == 1)
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