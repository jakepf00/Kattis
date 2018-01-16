#include<bits/stdc++.h>

using namespace std;

int main() {
    int days;
    int month;
    cin >> days >> month;

    switch (month) {
        case 12: days += 30;
        case 11: days += 31;
        case 10: days += 30;
        case 9: days += 31;
        case 8: days += 31;
        case 7: days += 30;
        case 6: days += 31;
        case 5: days += 30;
        case 4: days += 31;
        case 3: days += 28;
        case 2: days += 31;
    }


    int day = days % 7;

    switch (day) {
        case 0: cout << "Wednesday" << endl; break;
        case 1: cout << "Thursday" << endl; break;
        case 2: cout << "Friday" << endl; break;
        case 3: cout << "Saturday" << endl; break;
        case 4: cout << "Sunday" << endl; break;
        case 5: cout << "Monday" << endl; break;
        case 6: cout << "Tuesday" << endl; break;
    }
}
