#include <iostream>
using namespace std;

//flatten 3D Array
int main(int argc, char const *argv[])
{
    int depth, rows, cols;
    cin >> depth >> rows >> cols;

    int Db = rows * cols;
    int Rb = cols;

    int option;
    cin >> option;

    if (option == 1) {
        int d, r, c;
        cin >> d >> r >> c;

        int pos_1D = d * (Db) + r * (Rb) + c;
        cout << "position in 1D : " << pos_1D << "\n"; 
    }
    else {
        int indx;
        cin >> indx;

        int d = indx / (Db);
        int r = (indx % Db) / Rb;
        int c = (indx % Db) % Rb;

        cout << "position in 3D : " << d << ", " << r << ", " << c << "\n";
    }
    
    return 0;
}
