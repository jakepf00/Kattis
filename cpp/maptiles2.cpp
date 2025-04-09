#include<bits/stdc++.h>
using namespace std;

int main() {
	string key;
	cin >> key;
	cout << key.length() << " ";
	int x = 0, y = 0;
    int curJump = 1;
	reverse(key.begin(), key.end());
	for (int i = 0; i < key.length(); i++) {
		switch (key[i]) {
		case '0':
			break;
		case '1':
            x += curJump;
			break;
		case '2':
            y += curJump;
			break;
		case '3':
            x += curJump;
            y += curJump;
			break;
		}
        curJump *= 2;
	}
    cout << x << " " << y << endl;
}
