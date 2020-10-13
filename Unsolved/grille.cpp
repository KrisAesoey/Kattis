#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rotate90Clockwise(vector< vector<char> > &a) { 
    int N = a.size();

    // Traverse each cycle 
    for (int i = 0; i < N / 2; i++) { 
        for (int j = i; j < N - i - 1; j++) { 
  
            // Swap elements of each cycle 
            // in clockwise direction 
            char temp = a[i][j]; 
            a[i][j] = a[N - 1 - j][i]; 
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
            a[j][N - 1 - i] = temp; 
        } 
    } 
} 

int main() {
    int size;
    cin >> size;

    vector< vector<char> > grid(size, vector<char>(size));
    vector< vector<char> > grille(size, vector<char>(size));

    for (int i=0; i < size; i++) {
        string row;
        cin >> row;
        for (int j=0; j < size; j++) {
            grille[i][j] = row.at(j);
        } 
    }

    string encrypted;
    cin.ignore();
    getline(cin, encrypted);
    int c = 0;
    
    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
            if (grille[i][j] == '.') {
                grid[i][j] = encrypted.at(c);
                c++;
            }
        }
    }

    rotate90Clockwise(grille);

    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
            if (grille[i][j] == '.') {
                grid[i][j] = encrypted.at(c);
                c++;
            }
        }
    }
    rotate90Clockwise(grille);

    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
            if (grille[i][j] == '.') {
                grid[i][j] = encrypted.at(c);
                c++;
            }
        }
    }
    rotate90Clockwise(grille);

    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
            if (grille[i][j] == '.') {
                grid[i][j] = encrypted.at(c);
                c++;
            }
        }
    }
    string message = "";

    for (int i=0; i < size; i++) {
        for (int j=0; j < size; j++) {
            if (grid[i][j] == '\0') {
                cout << "invalid grille" << endl;
                return 0;
            }
            message += grid[i][j];
        }
    }
    cout << message << endl;
    return 0;
}