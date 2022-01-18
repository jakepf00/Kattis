#include <iostream>

using namespace std;

int main() {
    int testCases;
    double minutes, sl, answer, totalMinutes = 0, totalsl = 0, seconds;
    cin >> testCases;

    cout.precision(10);

    for (int i = 0; i < testCases; i++) {
        cin >> minutes >> sl;
        totalMinutes += minutes;
        totalsl += sl;
    }

    seconds = totalMinutes * 60;
    answer = totalsl / seconds;

    if (answer <= 1) cout << "measurement error" << endl;

    else cout << answer << endl;

    return 0;
}
