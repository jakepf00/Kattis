#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 0, b = 0;
    string c;
    cin >> c;
    vector<char> d = { 'a','e','i','o','u' };
    for (auto i : c) {
        if (find(d.begin(), d.end(), i) != d.end()) a++;
        else if (i == 'y') b++;
    }
    cout << a << " " << a + b << endl;
}
