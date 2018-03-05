#include <bits/stdc++.h>

using namespace std;

void splitString(vector<int>& container, string a) {
    string b = "";
    for (auto i : a) {
        if (i != ' ') {
            b.push_back(i);
        } else {
            container.push_back(stoi(b));
            b = "";
        }
    }
    container.push_back(stoi(b));
}

int main() {
    vector<int> numbers;
    string integers;
    while(getline(cin, integers)) {
        splitString(numbers, integers);
        int ans = 0;
        int total = 0;
        for (int i = 0; i < numbers.size(); i++) {
            for (int j = 0; j < numbers.size(); j++) {
                if (j == i) {
                    ans = numbers[j];
                } else total += numbers[j];
            }
            if (ans == total) break;
            total = 0; ans = 0;
        }
        cout << ans << endl;
        numbers.clear();
    }
}
