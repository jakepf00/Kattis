#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    string stack = "";
    cin.ignore();
    for (int i = 0; i < a; i++) {
        char b;
        cin.get(b);
        if (b == '(' || b == '{' || b == '[') {
            stack += b;
        }
        else if (b == ')') {
            if (stack.back() == '(') stack.pop_back();
            else {
                cout << b << " " << i << endl;
                return 0;
            }
        }
        else if (b == '}') {
            if (stack.back() == '{') stack.pop_back();
            else {
                cout << b << " " << i << endl;
                return 0;
            }
        }
        else if (b == ']') {
            if (stack.back() == '[') stack.pop_back();
            else {
                cout << b << " " << i << endl;
                return 0;
            }
        }
    }
    cout << "ok so far" << endl;
}
