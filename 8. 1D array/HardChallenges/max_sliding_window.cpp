#include<iostream>
using namespace std;

//fixed sliding window
int main() {

    int n, k;
    cin >> k >> n;

    int numbers[n];
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];
              
    int mx = INT32_MIN;
    int first_indx;
    for (int first = 0, last = 2; last < n; ++first, ++last) {
        int sum = 0;
        for (int i = first; i <= last; ++i) {
            sum += numbers[i];
            if (sum > mx) {
                mx =sum;
                first_indx = first; 
            }

        }
    }

    for (int i = first_indx; i < first_indx + 3; ++i)
        cout << i << " ";

    return 0;
}