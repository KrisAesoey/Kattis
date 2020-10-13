#include <iostream>
using namespace std;

class QuickFindUF {

    public:
        int count;
        int len;
        int * id;

        QuickFindUF(int n) {
            count = n;
            len = n;
            id = new int [n];

            for (int i=0; i < n; i++) {
                id[i] = i;
            }
        }
        int count() {
            return count;
        }
        int find(int p) {
            validate(p);
            return id[p];
        }
        validate(int p) {
            int n = len;
            if (p < 0 || p >= n) {
                return 0;
            }
        }
};

int main() {
    int n;
    cin >> n;
    QuickFindUF qf(n);
    cout << qf.count << endl;
    return 0;
}