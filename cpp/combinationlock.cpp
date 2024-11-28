#include<bits/stdc++.h>
using namespace std;

int main() {
    int start, a, b, c;
    while (cin >> start >> a >> b >> c) {
        if ((start + a + b + c) == 0) break;
        // Start with 3 turns - 2 at beginning, 1 in middle
        int total = 120;
        // Go backwards to the first number
        if (start < a) start += 40;
        total += (start - a);
        // Go forwards to second number
        if (a > b) a -= 40;
        total += (b - a);
        // Go backwards to last number
        if (b < c) b += 40;
        total += (b - c);

        // Multiply by 9 for degrees
        cout << total * 9 << endl;
    }
}
