#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int iterations;
    int points = 2;

    cin >> iterations;

    for (int i=0; i<iterations; i++) {
        points += pow(2, i);
    }
    
    points = pow(points, 2);

    cout << points;
}