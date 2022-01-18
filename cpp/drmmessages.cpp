#include <bits/stdc++.h>

using namespace std;

void rotate(string& message) {
    int x = 0;
    for (int i = 0; i < message.length(); i++) {
        x += (message[i] - 'A');
    }
    x %= 26;
    for (int i = 0; i < message.length(); i++) {
        message[i] += x;
	    while (message[i] < 'A') message[i] += 26;
        while (message[i] > 'Z') message[i] -= 26;
    }
}

int main() {
    string message, a, b;
    cin >> message;
    for (int i = 0; i < message.length(); i++) {
        if (i >= message.length()/2) b.push_back(message[i]);
        else a.push_back(message[i]);
    }
    rotate(a);
    rotate(b);
    for (int i = 0; i < a.length(); i++) {
        a[i] += (b[i] - 'A');
        while (a[i] > 'Z') a[i] -= 26;
    }
    cout << a << endl;
}
