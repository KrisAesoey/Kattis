#include <iostream>
using namespace std;

int main() {
    string line, answer = "";
    cin >> line;

    int n = line.length();

    for (int i = 0; i < n; i++) {
        if (line[i] == '<') {
            answer.pop_back();
        }
        else {
            answer.push_back(line[i]);
        }
    }
    long m = answer.length();

    cout << answer << endl;
    return 0;
}