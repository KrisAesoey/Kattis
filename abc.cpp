#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int x, y, z;
    string line, output;
    cin >> x >> y >> z >> line;
    char a = line.at(0);
    char b = line.at(1);
    char c = line.at(2);

    vector<int> numbers {x, y, z};
    vector<char> chars {a, b, c};

    map<char, int> pair;
    char h = max(max(a, b), c);
    char l = min(min(a, b), c);
    pair[h] = max(max(x, y), z);
    pair[l] = min(min(x, y), z);
    chars.erase(std::remove(chars.begin(), chars.end(), h), chars.end());
    chars.erase(std::remove(chars.begin(), chars.end(), l), chars.end());

    for (int i=0; i < 3; i++) {
        if (numbers[i] != min(min(x, y), z) && numbers[i] != max(max(x, y), z)) {
            pair[chars[0]] = numbers[i];
        }
    }
    cout << to_string(pair[a]) + " " + to_string(pair[b]) + " " + to_string(pair[c]);
    
    return 0;
}