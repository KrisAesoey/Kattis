#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int w = n;
    for (int i = 0; i < n; i++) {
        string battle;
        cin >> battle;
        for (int j = 0; j < battle.size() - 1; j++) {
            if (battle[j] == 'C' && battle[j+1] == 'D') {
                w--;
                break;
            }
        }
    }
    cout << w << endl;
    return 0;
}