#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    int count = 0;
    vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    for (auto i : line) {
        if (find(vowels.begin(), vowels.end(), i) != vowels.end()) count++;
    }
    cout << count << endl;
}
