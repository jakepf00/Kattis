#include <iostream>

using namespace std;

int main() {
    int currentDay = 0;
    int total = 0;
    int numDays = 0;
    cin >> numDays;

    for (int i = 0; i < numDays; i++) {
        cin >> currentDay;
        if (currentDay < 0) total++;
    }

    cout << total << endl;
}
