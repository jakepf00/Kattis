#include<bits/stdc++.h>

using namespace std;

int main() {
    cout.precision(9);
    long double total = 0;
    int number;
    cin >> number;
    long double prev, cur;
    cin >> prev;
    double previous, current;
    cin >> previous;
    while(--number) {
        cin >> cur >> current;
        total += (((previous + current) / 2) * (cur - prev)) / 1000;
        prev = cur;
        previous = current;
    }
    cout << total << endl;
}
