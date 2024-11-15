#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string name, a, b;
        int courses;
        cin >> name >> a >> b >> courses;
        int d1 = stoi(a.substr(0, 4));
        int d2 = stoi(b.substr(0, 4));
        cout << name << " ";
        if (d1 >= 2010) cout << "eligible" << endl;
        else if (d2 >= 1991) cout << "eligible" << endl;
        else if (courses >= 41) cout << "ineligible" << endl;
        else cout << "coach petitions" << endl;
    }
}
