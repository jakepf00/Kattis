#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = 0, total = 0;
    for (auto i : s) {
        if (isupper(i)) {
            if ((num % 4) != 0) total += 4 - (num % 4);
            num = 1;
        }
        else num++;
    }

    cout << total << endl;
}
