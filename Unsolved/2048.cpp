#include <iostream>
#include <vector>
using namespace std;

int main() {
    int c;

    vector< vector<int> > grid(4, vector<int>(4));

    for (int i=0; i < 4; i++) {
        for (int j=0; j < 4; j++) {
            int c;
            cin >> c;
            grid[i][j] = c;
        }
    }

    int t;
    cin >> t;

    if (t == 0) {
        for (int i=0; i < 4; i++) {
            for (int j=3; j > 0; j--) {
                if(grid[i][j] == grid[i][j-1] && grid[i][j] != 0) {
                    grid[i][j-1] = grid[i][j-1] * 2;
                    grid[i][j] = 0;
                    j=3;
                }
                if(grid[i][j-1] == 0 && grid[i][j] != 0) {
                    grid[i][j-1] = grid[i][j];
                    grid[i][j] = 0;
                    j=3;
                }
            }
        }
    }
    if (t == 1) {
        for (int j=0; j < 4; j++) {
            for (int i=3; i > 0; i--) {
                if(grid[i][j] == grid[i-1][j] && grid[i][j] != 0) {
                    grid[i-1][j] = grid[i-1][j] * 2;
                    grid[i][j] = 0;
                    i=3;
                }
                if(grid[i-1][j] == 0 && grid[i][j] != 0) {
                    grid[i-1][j] = grid[i][j];
                    grid[i][j] = 0;
                    i=3;
                }
            }
        }
    }
    if (t == 2) {
        for (int i=0; i < 4; i++) {
            for (int j=0; j < 3; j++) {
                if(grid[i][j] == grid[i][j+1] && grid[i][j] != 0) {
                    grid[i][j+1] = grid[i][j+1] * 2;
                    grid[i][j] = 0;
                    j=0;
                }
                if(grid[i][j+1] == 0  && grid[i][j] != 0) {
                    grid[i][j+1] = grid[i][j];
                    grid[i][j] = 0;
                    j=0;
                }
            }
        }
    }
    if (t == 3) {
        for (int j=0; j < 4; j++) {
            for (int i=0; i < 3; i++) {
                if(grid[i][j] == grid[i+1][j] && grid[i][j] != 0) {
                    grid[i+1][j] = grid[i+1][j] * 2;
                    grid[i][j] = 0;
                    i=0;
                }
                if(grid[i+1][j] == 0 && grid[i][j] != 0) {
                    grid[i+1][j] = grid[i][j];
                    grid[i][j] = 0;
                    i=0;
                }
            }
        }
    }

    for (int i=0; i < 4; i++) {
        for (int j=0; j < 4; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

}