#include<iostream>
using namespace std;

//search for a number

int FreqArr[201];

int main()
{
	int ArrSize, ListSize;
	int flag = 0;

	cin >> ArrSize >> ListSize;

	int arr[ArrSize];
	int List[ListSize];

	for(int i = 0; i < ArrSize; ++i)
		cin >> arr[i];

	for(int i = 0; i < ListSize; ++i)
		cin >> List[i];
	
	for(int j = 0; j < ListSize; ++j)
	{
		flag = 0;

		for(int i = 0; i < ArrSize; ++i)
		{
			if(List[j] == arr[i])
			{
				FreqArr[List[j]] = i;
				flag = 1;
			}
		}

		if(flag == 0)
			FreqArr[List[j]] = -1;
		
	}

	for(int i = 0; i < ListSize; ++i)
	{
		cout << List[i] << " Last Occurance " << FreqArr[List[i]] << endl;

	}
	

	return 0;
}