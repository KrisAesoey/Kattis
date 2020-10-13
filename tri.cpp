#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    char x, y;

    if (a+b <= c) {
        y = '=';
        (a + b == c) ? x = '+' : x = '*';
    }
    else {
        x = '=';
        if (a < b) {
            (a == b - c) ? y = '-' : y = '/';
        }
        else {
            (a == b + c) ? y = '+' : y = '*';
        }
    }
    string answer = to_string(a)  + x + to_string(b) + y + to_string(c);

    cout << answer << endl;
}