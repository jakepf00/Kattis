#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int numCS, numE;
        cin >> numCS >> numE;
        multiset<int> cs;
        double csAvg = 0, eAvg = 0;

        for (int i = 0; i < numCS; i++) {
            int iq;
            cin >> iq;
            csAvg += (double) iq;
            cs.insert(iq);
        }
        csAvg /= (double) numCS;

        for (int i = 0; i < numE; i++) {
            double iq;
            cin >> iq;
            eAvg += iq;
        }
        eAvg /= (double) numE;

        int total = 0;
        for (auto itr = cs.begin(); itr != cs.end(); ++itr) {
            if (*itr < csAvg && *itr > eAvg) total++;
            else if (*itr > csAvg) break;
        }
        cout << total << endl;
    }
}
