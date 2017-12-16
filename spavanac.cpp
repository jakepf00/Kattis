#include <iostream>

using namespace std;

int main() {
    int hours, minutes, totalMinutes, newHours, newMinutes;
    cin >> hours >> minutes;

    totalMinutes = (hours * 60) + minutes - 45;
    if (totalMinutes >= 0) {
        newHours = totalMinutes / 60;
        newMinutes = totalMinutes % 60;
    } else {
        newHours = 23;
        newMinutes = minutes + 15;
    }

    cout << newHours << " " << newMinutes << endl;
    return 0;
}
