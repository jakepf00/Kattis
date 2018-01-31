#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> p = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> k = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> h = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    vector<int> t = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    char suit;
    string number;
    number.resize(2);
    int num;
    vector<string> cards;
    while (cin >> suit >> number[0] >> number[1]) {
        num = stoi(number);
        switch(suit) {
            case 'P': p.erase(remove(p.begin(), p.end(), num), p.end()); break;
            case 'K': k.erase(remove(k.begin(), k.end(), num), k.end()); break;
            case 'H': h.erase(remove(h.begin(), h.end(), num), h.end()); break;
            case 'T': t.erase(remove(t.begin(), t.end(), num), t.end()); break;
        }
        string card = suit + number;
        for (int i = 0; i < cards.size(); i++) {
            if (cards[i] == card) {
                cout << "GRESKA" << endl;
                return 0;
            }
        }
        cards.push_back(card);
    }
    cout << p.size() << " " << k.size() << " " << h.size() << " " << t.size() << endl;
}
