#include<iostream>
using namespace std;

int main()
{
	int n;
	int max = INT32_MIN;
	int min = INT32_MAX;

	cin >> n;

	int arr[n];

	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];

		if(arr[i] > max)
		{
			max = arr[i];
		}
		else
		{
			if(arr[i] < min)
			{
				min = arr[i];
			}
		}
		
	}

	for(int i = 0; i < n; ++i)
	{
		if(arr[i] == min)
		{
			arr[i] = max;
		}
		else if(arr[i] == max)
		{
			arr[i] = min;
		}

		cout << arr[i] << " ";
	}

	return 0;
}
