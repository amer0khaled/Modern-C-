#include <iostream>
using namespace std;

//Active Robot

//up -   right    -   down  -   left
//directional array
int di[] {-1, 0, 1, 0};
int dj[] {0, 1, 0, -1};


int main() {
    int n, m, k, r = 0, c = 0;

    cin >> n >> m >> k;

    while (k--) {
        int dir, steps;
        cin >> dir >> steps;

        //to convert it to zero based
        --dir;

        r = (r + di[dir] * steps) % n;
        c = (c + dj[dir] * steps) % m;

        if (r  < 0)
            r += n;
        if (c < 0)
            c += m;
        
        cout << r << " " << c << "\n";

    }
}


/*


int main() {

    int rows, cols;
    cin >> rows >> cols;

    int k, steps, direction;
    enum Direction {NOT_USAGE, UP, RIGHT, DOWN, LEFT};

    cin >> k;

    int nr = 0, nc = 0;
    for (int i = 0; i < k; ++i) {
        cin  >> direction >> steps;

       switch (direction) {
            case UP:
                if (nr - steps >= 0)
                    nr -= steps;

                else if (nr - steps < 0)
                    nr = (nr - steps) + rows;

                cout << nr << " " << nc << " \n";
                break;

            case RIGHT:
                if (nc + steps < cols)
                    nc += steps;
                    
                else if (nc + steps >= cols)
                    nc = (nc - steps) - cols;
                
                cout << nr << " " << nc << " \n";
                break;

            case DOWN:
                if (nr + steps < rows)
                    nr += steps;
                    
                else if (nr + steps >= rows)
                    nr = (nr + steps) - rows;

                cout << nr << " " << nc << " \n";
                break;

            case LEFT:
                if (nc - steps >= 0)
                    nc -= steps;
                
                else if (nc - steps < 0)
                    nc = (nc - steps) + cols;

                cout << nr << " " << nc << " \n";
                break;

            default:
                cout << "Invalid Move\n";
        }
    }


    return 0;
}

*/