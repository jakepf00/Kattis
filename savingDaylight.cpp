#include<bits/stdc++.h>

using namespace std;

int main() {
    int minutes1, hours1, minutes2, hours2, total1, total2, totalTime;
    string month, day, year, time1, time2;
    while (cin >> month >> day >> year  >> time1 >> time2) {
        if (time1[1] == ':') {
            hours1 = (int) time1[0] - 48;
            minutes1 = (int) time1[2] - 48;
            minutes1 *= 10;
            minutes1 += (int) time1[3] - 48;
        } else {
            hours1 = (int) time1[0] - 48;
            hours1 *= 10;
            hours1 += (int) time1[1] - 48;
            minutes1 = (int) time1[3] - 48;
            minutes1 *= 10;
            minutes1 += (int) time1[4] - 48;
        }
        if (time2[1] == ':') {
            hours2 = (int) time2[0] - 48;
            minutes2 = (int) time2[2] - 48;
            minutes2 *= 10;
            minutes2 += (int) time2[3] - 48;
        } else {
            hours2 = (int) time2[0] - 48;
            hours2 *= 10;
            hours2 += (int) time2[1] - 48;
            minutes2 = (int) time2[3] - 48;
            minutes2 *= 10;
            minutes2 += (int) time2[4] - 48;
        }
        total1 = (hours1 * 60) + minutes1;
        total2 = (hours2 * 60) + minutes2;
        totalTime = total2 - total1;
        cout << month << " " << day << " " << year << " " << totalTime / 60 << " hours " << totalTime % 60 << " minutes" << endl;
    }
}
