#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int students;
    while (cin >> students && students != 0) {
        vector<int> moneys;
        moneys.resize(students);
        int total = 0;
        for (int i = 0; i < students; i++) {
            int dollars, cents;
            cin >> dollars;
            cin.ignore();
            cin >> cents;
            dollars *= 100;
            moneys[i] = dollars + cents;
            total += moneys[i];
        }
        int average = total / students;
        int leftover = total % students;
        vector<int> averages;
        averages.resize(students);
        for (int i = 0; i < students; i++) averages[i] = average;
        for (int i = 0; i < leftover; i++) averages[i]++;
        sort(moneys.begin(), moneys.end());
        sort(averages.begin(), averages.end());
        int ans = 0;
        for (int i = 0; i < students; i++) {
            ans += abs(moneys[i] - averages[i]);
        }
        ans /= 2;
        double ans2 = (double) ans / 100;
        cout << "$" << ans2 << endl;
    }
}
