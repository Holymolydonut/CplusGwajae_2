#include<iostream>
using namespace std;

int main(void) {
    char board[3][3];
    int x, y, k, i;

    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';

    for (k = 0; k < 9; k++) {
        cout << "(x, y) ÁÂÇ¥:";
        cin >> x >> y;
        board[x][y] = (k % 2 == 0) ? 'X' : 'O';

        for (i = 0; i < 3; i++) {
            cout << "---l---l---" << endl;
            cout << board[i][0] << " l " << board[i][1] << " l " << board[i][2] << endl;
        }
        cout << "---l---l---" << endl;
    }
    return 0;
}