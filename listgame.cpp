#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> k (1);

    while (x % 2 == 0)  {
        k.push_back(2);   
        x = x / 2;  
    }  

    for (int i = 3; i <= sqrt(x); i = i + 2)  {  
        while (x % i == 0) {  
            k.push_back(i);
            x = x/i;  
        }  
    }  

    if (x > 2) {
        k.push_back(x);
    }
    cout << k.size() - 1 << endl;

    return 0;
}