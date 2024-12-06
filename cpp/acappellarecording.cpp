#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    deque<int> pitches(n);
    for (int i = 0; i < n; i++) {
        cin >> pitches[i];
    }
    sort(pitches.begin(), pitches.end());
    int ans = 0;
    while (pitches.size() > 0) {
        ans++;
        int start = pitches[0];
        while (pitches.size() > 0 && (pitches[0] - start <= p)) pitches.pop_front();
    }
    cout << ans << endl;
}
