#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<string> sentence;
    string word;

    while(cin >> word) {
        for (int i = 0; i < sentence.size(); i++) {
            if (word == sentence[i]) {
                cout << "no" << endl;
                return 0;
            }
        }
        sentence.push_back(word);
    }

    cout << "yes" << endl;
}
