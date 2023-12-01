#include<iostream>
using namespace std;

//minimum three values

void Bubble_Sort(int * arr, int size)
{
	for(int i = 0; i < size-1; ++i)
	{
		for(int j = 0; j < size-1-i; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j]   = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}


int main()
{
	int size;

	cin >> size;

	int arr[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	Bubble_Sort(arr, size);

	cout << "minimum three values are ";

	for(int i = 0; i < 3; ++i)
	{
		cout << arr[i] << " ";
	}

	return 0;
}