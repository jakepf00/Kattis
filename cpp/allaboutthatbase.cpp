#include<bits/stdc++.h>
using namespace std;

char getCh(int base) {
    if (base == 36) return '0';
    if (base <= 9) return '0' + base;
    return 'a' - 10 + base;
}

int getInt(char num) {
    if (num <= '9') return num - '0';
    else return num - 'a' + 10;
}

bool baseOne(string num1, char op, string num2, string num3) {
    if (!((num1 + num2 + num3).find_first_not_of('1') == string::npos)) return false;
    int n1, n2, n3;
    n1 = num1.length();
    n2 = num2.length();
    n3 = num3.length();
    
    switch (op) {
        case '+': return (n1 + n2 == n3);
        case '-': return (n1 - n2 == n3);
        case '*': return (n1 * n2 == n3);
        case '/': return ((n1 / n2 == n3) && (n1 % n2 == 0));
        default: return false;
    }
}

bool checkBase(string num1, char op, string num2, string num3, int base) {
    if (base == 1) return baseOne(num1, op, num2, num3);
    
    int n1 = 0, n2 = 0, n3 = 0;

    for (auto i : num1) {
        n1 *= base;
        int n = getInt(i);
        if (n >= base) return false;
        n1 += n;
    }
    for (auto i : num2) {
        n2 *= base;
        int n = getInt(i);
        if (n >= base) return false;
        n2 += n;
    }
    for (auto i : num3) {
        n3 *= base;
        int n = getInt(i);
        if (n >= base) return false;
        n3 += n;
    }
    
    switch (op) {
        case '+': return (n1 + n2 == n3);
        case '-': return (n1 - n2 == n3);
        case '*': return (n1 * n2 == n3);
        case '/': return ((n1 / n2 == n3) && (n1 % n2 == 0));
        default: return false;
    }
}

int main() {
    int cases;
    cin >> cases;
    while(cases--) {
        string num1, num2, num3;
        char op, eq;
        cin >> num1 >> op >> num2 >> eq >> num3;

        string ans = "";
        for (int i = 1; i <= 36; i++) {
            if (checkBase(num1, op, num2, num3, i)) ans.push_back(getCh(i));
        }

        cout << (ans == "" ? "invalid" : ans) << endl;
    }
}
