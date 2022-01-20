#include<iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int outlets;
        cin >> outlets;
        int ans = 1;
        while (outlets--) {
            int i;
            cin >> i;
            ans += i;
            ans--;
        }
        cout << ans << endl;
    }
}
