#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	while (cin >> a >> b && a != "0") {
		string ans = to_string(stoi(a) * stoi(b));
		int wait = (a.length() + b.length()) - ans.length();

		// Top top
		cout << "+--";
		for (auto i : a) cout << "----";
		cout << "-+" << endl;

		// Top number
		cout << "|   ";
		for (auto i : a) cout << i << "   ";
		cout << "|" << endl;
		
		// Side number
		for (auto i : b) {
			// Top border
			cout << "| +";
			for (auto j : a) cout << "---+";
			cout << " |" << endl;

			// Top
			cout << "|";
			if (wait < 0) cout << "/";
			else cout << " ";
			cout << "|";
			for (auto j : a) {
				string c = to_string((i - '0') * (j - '0'));
				char d = c.length() > 1 ? c[0] : '0';
				cout << d << " /|";
			}
			cout << " |" << endl;

			// Middle
			cout << "| |";
			for (auto j : a) cout << " / |";
			cout << i << "|" << endl;

			// Bottom
			cout << "|";
			if (wait <= 0) {
				cout << ans[0];
				ans.erase(0, 1);
			} else cout << " ";
			cout << "|";
			for (auto j : a) {
				string c = to_string((i - '0') * (j - '0'));
				char d = c.length() > 1 ? c[1] : c[0];
				cout << "/ " << d << "|";
			}
			cout << " |" << endl;

			wait--;
		}
		
		// Inner bottom border
		cout << "| +";
		for (auto i : a) cout << "---+";
		cout << " |" << endl;

		// Answer row
		cout << "|";
		for (auto i : a) {
			if (wait < 0) cout << "/";
			else cout << " ";
			cout << " " << ans[0] << " ";
			ans.erase(0, 1);
			wait--;
		}
		cout << "   |" << endl;
		
		// Bottom border
		cout << "+--";
		for (auto i : a) cout << "----";
		cout << "-+" << endl;
	}
}
