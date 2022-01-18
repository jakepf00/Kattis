#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, all = 0, odd = 0, even = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int caseNum, number;
        cin >> caseNum >> number;
        int a = 0, b = -1;
        for (int i = 0; i < number; i++) {
            a++;
            b += 2;
            all += a;
            odd += b;
        }
        even = odd + number;

        cout << caseNum << " " << all << " " << odd << " " << even << endl;
        all = 0;
        odd = 0;
        even = 0;
    }
}
