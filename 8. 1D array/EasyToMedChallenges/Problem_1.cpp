#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int arr[n];

	cin >> arr[0];

	for(int i = 1; i < n; ++i)
	{
		cin >> arr[i];	
		
		if(arr[i] < arr[i-1])
		{
			cout << "NO" << endl;
			return 0;
		}		
	}

	cout << "YES" << endl;

	return 0;
}