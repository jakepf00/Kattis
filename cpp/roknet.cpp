#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, bool> a;
    while (n--) {
        string command;
        cin >> command;
        if (command == "INNTAK") {
            string name, val;
            cin >> name >> val;
            if (val == "SATT") a[name] = true;
            else a[name] = false;
        }
        else if (command == "UTTAK") {
            string in;
            cin >> in;
            cout << in << " ";
            if (a[in]) cout << "SATT" << endl;
            else cout << "OSATT" << endl;
        }
        else if (command == "OG") {
            string in1, in2, name;
            cin >> in1 >> in2 >> name;
            if (a[in1] && a[in2]) a[name] = true;
            else a[name] = false;
        }
        else if (command == "EDA") {
            string in1, in2, name;
            cin >> in1 >> in2 >> name;
            if (!a[in1] && !a[in2]) a[name] = false;
            else a[name] = true;
        }
        else if (command == "EKKI") {
            string in, name;
            cin >> in >> name;
            a[name] = !a[in];
        }
    }
}
