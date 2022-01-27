#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    int caseNum = 0;
    while (getline(cin, line) && line != "END") {
        caseNum++;

        int spacing = 0;
        int num = 0;
        bool spacingSet = false;
        bool even = true;

        if (line.find(".") != string::npos) {
            line.erase(0, 1);
            for (auto i : line) {
                if (!spacingSet) {
                    if (i == '.') spacing++;
                    else {
                        spacingSet = true;
                    }
                }
                else {
                    if (i == '.') num++;
                    else {
                        if (num != spacing) {
                            even = false;
                            break;
                        }
                        else num = 0;
                    }
                }
            }
        }

        cout << caseNum << (even ? " EVEN" : " NOT EVEN") << endl;
    }
}
