#include <iostream>
using namespace std;

//Smaller row
int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> arr[i][j];
    }

    int q, x, y, flag = 0;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        flag = 0;
        for (int j = 0; j < m; ++j) {
            if (arr[x - 1][j] >= arr[y - 1][j]) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            cout << "yes\n";
        else
            cout << "no\n";
    }

}