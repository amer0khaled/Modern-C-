#include <iostream>
using namespace std;

//Triangular matrix

int main()
{
    int n;
    int upper_triangle = 0, lower_triangle = 0;

    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];

			if (i <= j)
				upper_triangle += arr[i][j];

			if (i >= j)
				lower_triangle += arr[i][j];
		}
	}


    cout << "upper_triangle = " << upper_triangle << endl;
    cout << "lower_triangle = " << lower_triangle << endl;
    return 0;
}