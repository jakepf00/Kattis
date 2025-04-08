#include<bits/stdc++.h>
using namespace std;

int main() {
    map<char, string> letters = {
        {'a',"2"},
        {'b',"22"},
        {'c',"222"},
        {'d',"3"},
        {'e',"33"},
        {'f',"333"},
        {'g',"4"},
        {'h',"44"},
        {'i',"444"},
        {'j',"5"},
        {'k',"55"},
        {'l',"555"},
        {'m',"6"},
        {'n',"66"},
        {'o',"666"},
        {'p',"7"},
        {'q',"77"},
        {'r',"777"},
        {'s',"7777"},
        {'t',"8"},
        {'u',"88"},
        {'v',"888"},
        {'w',"9"},
        {'x',"99"},
        {'y',"999"},
        {'z',"9999"},
        {' ',"0"}
    };
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        cout << "Case #" << i << ": ";
        string line;
        getline(cin, line);
        for (int j = 0; j < line.length(); j++) {
            if (j > 0 && letters[line[j - 1]][0] == letters[line[j]][0]) cout << " ";
            cout << letters[line[j]];
        }
        cout << endl;
    }
}
