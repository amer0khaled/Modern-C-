#include<iostream>
#include<stdint.h>

using namespace std;



//we use Frequency Array in this problem

//max value is 150
//so the size of Frequency Array is 150 + 1 

int FreqArr[151];

int main()
{
    int size; 
    int Repeated_Times;
    int indx;

    cin >> size;

    
    int arr[200];

  for(int i = 0; i < size; ++i)
  {
    cin >> arr[i];
    ++FreqArr[arr[i]];
  }
    

    Repeated_Times = FreqArr[0];

  for(int i = 1; i < 151; ++i)
  {
   if(Repeated_Times < FreqArr[i])
   {
    indx = i;
    Repeated_Times = FreqArr[i];
   }
   
  }

    printf("%d Repeated %d Times", indx, Repeated_Times);

    return 0;
}