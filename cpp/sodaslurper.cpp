#include <bits/stdc++.h>

using namespace std;

int main() {
    int e, f, c;
    cin >> e >> f >> c;
    int bottles = e + f;
    int total = 0;
    while (bottles - c >= 0) {
        bottles -= c;
        total++;
        bottles++;
    }
    cout << total << endl;
}
