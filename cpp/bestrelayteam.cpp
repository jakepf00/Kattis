#include<bits/stdc++.h>
using namespace std;

void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int a;
    cin >> a;
    map<string, long double> time, fly;
    for (int i = 0; i < a; i++) {
        string b;
        long double c, d;
        cin >> b >> c >> d;
        time[b] = c;
        fly[b] = d;
    }

    // Find fastest four by fly alone
    string best[4] = { "", "", "", "" };
    for (auto i : fly) {
        if (best[3] == "" || fly[best[3]] > i.second) best[3] = i.first;
        if (best[2] == "" || fly[best[2]] > fly[best[3]]) swap(best[2], best[3]);
        if (best[1] == "" || fly[best[1]] > fly[best[2]]) swap(best[1], best[2]);
        if (best[0] == "" || fly[best[0]] > fly[best[1]]) swap(best[0], best[1]);
    }

    // Find fastest between four
    long double minDif = 100;
    string minDifString = "";
    long double total1 = 0;
    for (auto i : best) {
        total1 += fly[i];
        long double curDif = time[i] - fly[i];
        if (curDif < minDif) {
            minDif = curDif;
            minDifString = i;
        }
    }
    total1 += minDif;

    // Find fastest of other runners
    long double fastestStart = 100;
    string fastestStartString = "";
    long double total2 = fly[best[0]] + fly[best[1]] + fly[best[2]];
    for (auto i : time) {
        if (i.first == best[0] || i.first == best[1] || i.first == best[2] || i.first == best[3]) continue;
        if (i.second < fastestStart) {
            fastestStart = i.second;
            fastestStartString = i.first;
        }
    }
    total2 += fastestStart;

    // Answer
    if (total1 < total2) {
        cout << total1 << endl << minDifString << endl;
        for (auto i : best) {
            if (i != minDifString) cout << i << endl;
        }
    }
    else {
        cout << total2 << endl << fastestStartString << endl << best[0] << endl << best[1] << endl << best[2] << endl;
    }
}
