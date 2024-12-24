#include<bits/stdc++.h>
using namespace std;

int calc(int a) {
    unordered_map<int, int> factors;

    for (int i = 2; i <= sqrt(a); i++) {
        while (a % i == 0) {
            factors[i]++;
            a /= i;
        }
    }
    if (a > 1) factors[a]++;

    int ans = 1;
    for (auto i : factors) {
        ans *= pow(i.second, i.first);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    while (cin >> a) {
        cout << a << " " << calc(a) << endl;
    }
}
