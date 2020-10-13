#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<int> in;
        vector<int> out;

        for (int i=0; i < n; i++) {
            int command, value;
            cin >> command >> value;

            if (command == 1) {
                in.push_back(value);
            }
            else {
                out.push_back(value);
            }
        }
        int answer = 14;

        if (in.size() < out.size()) {
            cout << "impossible" << endl;
            continue;
        }

        if (in[0] == out.back()) {
            for (int i = 1; i < out.size(); i++) {
                if (out[out.size() - i] != in[i]) {
                    answer -= 3;
                    cout << "not stack" << endl;
                    break;
                }
            }
        }
        if (in[0] == out[0]) {
            for (int i = 1; i < out.size(); i++) {
                if (in[i] != out[i]) {
                    answer -= 5;
                    cout << "not queue" << endl;
                    break;
                }
            }
        }
        for (int i = 0; i < out.size() - 1; i++) {
            if (!(out[i] > out[i+1])) {
                answer -= 7;
                cout << "not pq" << endl;
                break;
            }
        }
        if (answer == 3) {
            cout << "stack" << endl;
            continue;
        }
        else if (answer == 5) {
            cout << "queue" << endl;
            continue;
        }
        else if (answer == 7) {
            cout << "priority queue" << endl;
            continue;
        }
        if (answer > 7) {
            cout << "not sure" << endl;
            continue;
        }
        else {
            cout << "impossible" << endl;
        }
    }
}