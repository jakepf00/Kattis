#include <iostream>

using namespace std;

int main() {
    int cases, current, previous, ans = 0;
    cin >> cases;
    while (cases--) {
        cin >> previous;
        while (cin >> current && current != 0) {
            if ((current - (2 * previous)) > 0) ans += (current - (2 * previous));
            previous = current;
        }
        cout << ans << endl;
        ans = 0;
    }
}
