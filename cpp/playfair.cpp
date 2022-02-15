#include<bits/stdc++.h>
using namespace std;

int main() {
    string key, message;
    getline(cin, key);
    getline(cin, message);

    key.erase(remove(key.begin(), key.end(), ' '), key.end());
    message.erase(remove(message.begin(), message.end(), ' '), message.end());

    vector<bool> alphabet(26, false);
    alphabet[16] = true; // q
    for (int i = 0; i < key.length(); i++) {
        if (alphabet[key[i] - 'a']) {
            key.erase(i, 1);
            i--;
        }
        else {
            alphabet[key[i] - 'a'] = true;
        }
    }
    for (int i = 0; i < alphabet.size(); i++) {
        if (!alphabet[i]) key.push_back('a' + i);
    }

    for(int i = 0; i < message.length(); i += 2) {
        string digraph = "";
        if (i == message.length() - 1) {
            digraph.push_back(message[i]);
            digraph.push_back('x');
        }
        else if (message[i] == message[i + 1]) {
            digraph.push_back(message[i]);
            digraph.push_back('x');
            i--;
        }
        else {
            digraph.push_back(message[i]);
            digraph.push_back(message[i + 1]);
        }

        if (key.find(digraph[0]) / 5 == key.find(digraph[1]) / 5) { // same row
            if (key.find(digraph[0]) != 24) digraph[0] = key[key.find(digraph[0]) + 1];
            else digraph[0] = key[20];
            if (key.find(digraph[0]) / 5 != key.find(digraph[1]) / 5) digraph[0] = key[key.find(digraph[0]) - 5];
            
            if (key.find(digraph[1]) != 24) digraph[1] = key[key.find(digraph[1]) + 1];
            else digraph[1] = key[20];
            if (key.find(digraph[0]) / 5 != key.find(digraph[1]) / 5) digraph[1] = key[key.find(digraph[1]) - 5];
        }
        else if (key.find(digraph[0]) % 5 == key.find(digraph[1]) % 5) { // same column
            digraph[0] = key[(key.find(digraph[0]) + 5) % 25];
            digraph[1] = key[(key.find(digraph[1]) + 5) % 25];
        }
        else {
            int pos1 = key.find(digraph[0]);
            int pos2 = key.find(digraph[1]);
            digraph[0] = key[(pos1 / 5) * 5 + pos2 % 5];
            digraph[1] = key[(pos2 / 5) * 5 + pos1 % 5];
        }
        cout << (char) toupper(digraph[0]) << (char) toupper(digraph[1]);
    }
    cout << endl;
}
