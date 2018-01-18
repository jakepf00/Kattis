#include<bits/stdc++.h>

using namespace std;

int main() {
    cout.precision(5);
    int cases, people;
    vector<double> grades;
    double average, grade, counter;
    average = 0;
    counter = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> people;
        for (int j = 0; j < people; j++) {
            cin >> grade;
            average += grade;
            grades.push_back(grade);
        }
        average /= people;

        for (int j = 0; j < people; j++) {
            if (grades[j] > average) counter++;
        }
        cout << fixed << setprecision(3) << (counter / people * 100) << "%" << endl;;
        grades.clear();
        average = 0;
        counter = 0;
    }
}
