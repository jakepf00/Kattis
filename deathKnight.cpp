#include<bits/stdc++.h>

using namespace std;

int main() {
    int cases, counter = 0;
    cin >> cases;
    string thingy;
    for (int i = 0; i < cases; i++) {
        counter++;
        cin >> thingy;
        for (int i = 1; i < thingy.size(); i++) {
            if ((thingy[i-1] == 'C') && (thingy[i] == 'D')) {
                counter--;
                break;
            }
        }
    }
    cout << counter << endl;
}
