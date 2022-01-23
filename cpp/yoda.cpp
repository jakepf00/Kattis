#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int aa, bb;
    aa = -1;
    bb = -1;
    while (a.length() < b.length()) a.insert(0, 1, '0');
    while (b.length() < a.length()) b.insert(0, 1, '0');

    for (int i = 0; i < a.length(); i++) {
        if (a[i] > b[i]) {
            if (aa == -1) aa = (int) a[i] - '0';
            else {
                aa *= 10;
                aa += (int) a[i] - '0';
            }
        }
        else if (a[i] < b[i]) {
            if (bb == -1) bb = (int) b[i] - '0';
            else {
                bb *= 10;
                bb += (int) b[i] - '0';
            }
        }
        else {
            if (aa == -1) aa = (int) a[i] - '0';
            else {
                aa *= 10;
                aa += (int) a[i] - '0';
            }
            if (bb == -1) bb = (int) b[i] - '0';
            else {
                bb *= 10;
                bb += (int) b[i] - '0';
            }
        }
    }
    
    if (aa == -1) cout << "YODA" << endl;
    else cout << aa << endl;
    
    if (bb == -1) cout << "YODA" << endl;
    else cout << bb << endl;
}
