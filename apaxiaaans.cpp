#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;

    string answer = "";

    for (int i = 0; i < name.length(); i++) {
        if (name[i] == name[i+1]) {
            int j = 1;
            while (name[i] == name[i+j]) {
                j++;
            }
            answer += name[i];
            i += j - 1;
            continue;
        }
        answer += name[i];
    }
    cout << answer << endl;
}