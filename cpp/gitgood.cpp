#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<string> path;
    set<string> files;
    while (a--) {
        string b, c;
        cin >> b >> c;
        if (b == "nano") {
            string ans = "git add ";
            for (auto i : path) {
                ans += i + "/";
            }
            ans += c;
            files.insert(ans);
        }
        else if (c == "..") path.pop_back();
        else path.push_back(c);
    }
    for (auto i : files) cout << i << endl;
    cout << "git commit\ngit push" << endl;
}
