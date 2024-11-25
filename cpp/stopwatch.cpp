#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    int prev, cur;
    if (n % 2 == 1) {
        cout << "still running" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cin >> prev;
        }
        else {
            cin >> cur;
            total += (cur - prev);
        }
    }
    cout << total << endl;
}
