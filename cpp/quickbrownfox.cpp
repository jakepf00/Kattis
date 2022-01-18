#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    string sentence;
    cin.ignore();
    for(int i = 0; i < cases; i++) {
        getline(cin, sentence);
        transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
        string abc = "abcdefghijklmnopqrstuvwxyz";
        for (auto k : sentence) {
            abc.erase(remove(abc.begin(), abc.end(), k), abc.end());
        }
        if (abc == "") {
            cout << "pangram" << endl;
        } else {
            cout << "missing " << abc << endl;
        }
    }
}
