#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> a = {
        {"Reykjavik","Reykjavik"},
        {"Kopavogur","Reykjavik"},
        {"Hafnarfjordur","Reykjavik"},
        {"Reykjanesbaer","Reykjavik"},
        {"Akureyri","Akureyri"},
        {"Gardabaer","Reykjavik"},
        {"Mosfellsbaer","Reykjavik"},
        {"Arborg","Reykjavik"},
        {"Akranes","Reykjavik"},
        {"Fjardabyggd","Akureyri"},
        {"Mulathing","Akureyri"},
        {"Seltjarnarnes","Reykjavik"},
    };
    string b;
    cin >> b;
    cout << a[b] << endl;
}
