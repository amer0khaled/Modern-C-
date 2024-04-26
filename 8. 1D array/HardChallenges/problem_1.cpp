#include<iostream>
using namespace std;

//recaman's sequence

//solution no.1

/*
int main()
{
    int index;
    int arr[201];
    int occurance[201 *10];

    cin >> index;

    arr[0] = 0;
    occurance[0] = 1;

    for(int i = 1; i <= index; ++i)
    {
        int val = arr[i - 1] - (i-1) - 1;

        if( (val <= 0) || (occurance[val]) )
            val = arr[i - 1] + (i - 1) + 1;

        occurance[val] = 1;
        arr[i] = val;

    }

    cout << arr[index] << endl;
   
    return 0;
}

*/

//solution no.2
int Check_Occurance(int arr[], int index, int num)
{
    int founded = 1;

    for(int i = 0; i < index+1; ++i)
    {
        if(num == arr[i])
        {
            founded = 0;
        }
    }

    return founded;
}

int main()
{
    int num = 0;
    int arr[201] = {0};
    int user_index;

    scanf("%d", &user_index);


    arr[0] = 0;

    for(int i = 0; i < user_index; ++i)
    {
        num = arr[i] - i - 1;
        if( (num > 0) && (Check_Occurance(arr, i, num)) )
        {
            arr[i+1] = num;
        }
        else
        {
            arr[i+1] = arr[i] + i + 1;
        }
    }

    printf("%d\n", arr[user_index]);
}













