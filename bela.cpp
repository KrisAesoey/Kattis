#include <iostream>
#include <map>
using namespace std;

int main() {
    
    int n;
    char b;
    cin >> n >> b;

    map<char, int> score;
    score['A'] = 11;
    score['K'] = 4;
    score['Q'] = 3;
    score['T'] = 10;
    score['8'] = 0;
    score['7'] = 0;

    string hand;
    int p = 0;

    while(cin >> hand) {
        char c = hand.at(0);
        char s = hand.at(1);

        if (c == 'J') {
            (s == b) ? p += 20 : p += 2;
            continue;
        }
        if (c == '9') {
            (s == b) ? p += 14 : p += 0;
            continue;
        }
        p += score[c];
    }

    cout << p << endl;

    return 0;
}