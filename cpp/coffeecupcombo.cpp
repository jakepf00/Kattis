#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a;
    cin >> n >> a;
    int coffee = 0, total = 0;
    for (auto i : a) {
        if (i == '0') {
            if (coffee > 0) {
                total++;
                coffee--;
            }
        }
        else {
            coffee = 2;
            total++;
        }
    }
    cout << total << endl;
}
