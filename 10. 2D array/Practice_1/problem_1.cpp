#include <iostream>
using namespace std;

#define INT_MIN		-2147483647 - 1

int main()
{
	int row, col;
	int max = INT_MIN;
	int max_row, max_col;

	cin >> row >> col;

	int arr[row][col];

	for(int i = 0; i < row; ++i)
	{
		for(int j = 0; j < col; ++j)
		{

			cin >> arr[i][j];

			if(max <= arr[i][j])
			{
				max = arr[i][j];
				max_row = i;
				max_col = j;

			}

		}
	}

	cout << "max value at position " << max_row << " " << max_col << " with value = " << max << endl;



	return 0;
}
