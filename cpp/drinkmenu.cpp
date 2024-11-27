#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    vector<string> drinks;
    while (n--) {
        string drink;
        getline(cin, drink);
        drinks.push_back(drink);
    }
    map<string, int> a;
    while (m--) {
        string b;
        getline(cin, b);
        if (a.find(b) == a.end()) {
            cout << drinks[0] << endl;
            a[b] = 1;
        }
        else {
            cout << drinks[a[b]] << endl;
            a[b]++;
        }
    }
}
