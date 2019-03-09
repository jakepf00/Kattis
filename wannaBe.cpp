#include<bits/stdc++.h>

using namespace std;

struct pokenom {
    unsigned long int a, d, h, number;
};
bool compareA(const pokenom &a, const pokenom &b) {
    return a.a > b.a;
}
bool compareD(const pokenom &a, const pokenom &b) {
    return a.d > b.d;
}
bool compareH(const pokenom &a, const pokenom &b) {
    return a.h > b.h;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<bool> chosen(n, false);
    vector<pokenom> things(n);
    for (int i = 0; i < n; i++) {
        pokenom dude;
        cin >> dude.a >> dude.d >> dude.h;
        dude.number = i;
        things[i] = dude;
    }
    sort(things.begin(), things.end(), compareA);
    for (int i = 0; i < k; i++) {
        chosen[things[i].number] = true;
    }
    sort(things.begin(), things.end(), compareD);
    for (int i = 0; i < k; i++) {
        chosen[things[i].number] = true;
    }
    sort(things.begin(), things.end(), compareH);
    for (int i = 0; i < k; i++) {
        chosen[things[i].number] = true;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (chosen[i]) count++;
    }
    cout << count << endl;
}
