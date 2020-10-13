#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int set [] = {1, 1, 2, 2, 2, 8};
    int pieces [6] = { };

    for (int i=0; i < 6; i++) {
        int p;
        cin >> p;
        pieces[i] = set[i] - p;
    }

    for (int i=0; i < 5; i++) {
        cout << pieces[i] << " ";
    }
    cout << pieces[5];

    return 0;
}