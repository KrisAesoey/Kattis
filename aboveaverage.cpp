#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

    int cases;
    cin >> cases;

    for (int i=0; i < cases; i++) {
        int people;
        cin >> people;

        double avg = 0;
        double aboveAvg = 0;
        vector<int> grades(people);

        for (int j=0; j < people; j++) {
            int grade;
            cin >> grade;

            grades[j] = grade;
            avg += grade;
        }
        avg = avg/people;

        for (int j=0; j < people; j++) {
            if (grades[j] > avg) {
                aboveAvg++;
            }
        }
        aboveAvg = aboveAvg/people * 100;

        stringstream stream;

        stream << fixed << setprecision(3) << aboveAvg;
        cout << stream.str() + "%" << endl;
    }
    return 0;
}