#include <iostream>
#include <math.h>
using namespace std;

//Add 5555

int main()
{
    string str;
    //at least 6 digits
    cin >> str;

    int carry = 0;

    for(int i = 0; i < str.size(); ++i)
    {
        int digit = (char)str[(str.size()) -1 -i] - '0';    //get digit

        if(i < 4)
            digit += 5; //add 5 to each of the first 4 digits
        digit += carry; //add carry if occured

        if(digit >= 10)
            carry = 1; //set carry to 1 if digit after adding 5 is greater than or equal 10
        else
            carry = 0;

        str[(str.size()) -1 -i] =digit + '0';   //convert the digit to string
        
    }

    if(carry == 1)
        cout << 1;  //print 1 if the last digit is greater than or equal 10
    
   cout << str;


    return 0;
}