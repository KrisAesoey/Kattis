#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char map[r][c];
    int squished[5] = {0};

    for (int i=0; i < r; i++) {
        string line;
        cin >> line;
        for (int j=0; j < c; j++) {
            map[i][j] = line[j];
        }
    }
    for (int i=0; i < r - 1; i++) {
        for (int j=0; j < c - 1; j++) {
            int cars = 0;
            if (map[i][j] == '#' || map[i+1][j] == '#' || map[i][j+1] == '#' || map[i+1][j+1] == '#') {
                continue;
            }
            if (map[i][j] == 'X') {
                cars++;
            }
            if (map[i+1][j] == 'X') {
                cars++;
            }
            if (map[i][j+1] == 'X') {
                cars++;
            }
            if (map[i+1][j+1] == 'X') {
                cars++;
            }
            squished[cars]++;
        }
    }
    for (int i=0; i < 5; i++) {
        cout << squished[i] << endl;
    }
    return 0;
}