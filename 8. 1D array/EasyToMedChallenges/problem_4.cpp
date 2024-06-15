#include<iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int arr[n];

	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for(int j = 0, i = n-1 ; j < n/2; ++j, --i)
	{
		if(arr[i] != arr[j])
		{
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;
	return 0;
}
