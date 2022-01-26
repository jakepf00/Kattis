#include<bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string num;
        string ans = "";
        cin >> num;
        reverse(num.begin(), num.end());
        for (int i = 0; i < num.length(); i++) {
            if (i % 2 == 1) {
                int temp = num[i] - '0';
                temp *= 2;
                ans = ans + to_string(temp);
            }
            else ans.push_back(num[i]);
        }
        int numAns = 0;
        for (auto i : ans) numAns += (i - '0');
        if (numAns % 10 == 0) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
}
