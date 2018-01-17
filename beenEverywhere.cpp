#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<string> cities;
    string city;
    int cases, c;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        cin >> c;
        for (int j = 0; j < c; j++) {
            cin >> city;
            for (int k = 0; k < cities.size(); k++) {
                if (cities[k] == city) break;
                if (k == cities.size() - 1) cities.push_back(city);
            }
            if (cities.size() == 0) cities.push_back(city);
        }
        cout << cities.size() << endl;
        cities.clear();
    }
}
