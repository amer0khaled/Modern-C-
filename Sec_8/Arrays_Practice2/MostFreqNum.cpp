#include<iostream>
#include<stdint.h>

using namespace std;

int main()
{
  
  int size;
  
  cin >> size;

  int arr[size];
  int count = 0;
  int max_count = 0;
  int index;

  for(int i = 0; i < size; i++)
    cin >> arr[i];

  for(int i = 0; i <= size; i++)
  {
    count = 1;

    for(int j = i+1; j < size; j++)
    {
      if((arr[i] == arr[j]))
      {
         count++;

         if(max_count <= count)
        {
          max_count = count;
          index = i;
        }
      }
    }

  }


  cout << arr[index] << "<<<" << max_count << endl;

    return 0;
}