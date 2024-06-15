#include<iostream>
using namespace std;

int main()
{
	int n;
	int min = INT32_MAX;
	int temp;

	cin >> n;

	int arr[n];

	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			temp = arr[i] + arr[j] + j - i;
			if(min > temp)
			{
				min = temp;
			}
		}
	}

	cout << min << endl;
	return 0;
}
