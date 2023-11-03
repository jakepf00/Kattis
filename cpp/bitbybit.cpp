#include<bits/stdc++.h>
using namespace std;

int main() {
	while(1) {
		int i;
		cin >> i;
		if (i == 0) break;
		int bits[32];
		for (int j = 0; j < 32; j++) bits[j] = -1;
		while (i--) {
			string instruction;
			cin >> instruction;
			if (instruction == "SET") {
				int a;
				cin >> a;
				bits[a] = 1;
			}
			else if (instruction == "CLEAR") {
				int a;
				cin >> a;
				bits[a] = 0;
			}
			else if (instruction == "AND") {
				int a, b;
				cin >> a >> b;
				if (bits[b] == -1 && bits[a] == 1) bits[a] = -1;
				else if (bits[b] == 0) bits[a] = 0;
			}
			else if (instruction == "OR") {
				int a, b;
				cin >> a >> b;
				if (bits[b] == -1 && bits[a] == 0) bits[a] = -1;
				else if (bits[b] == 1) bits[a] = 1;
			}
		}
		for (int j = 31; j >= 0; j--) {
			if (bits[j] == -1) cout << "?";
			else cout << bits[j];
		}
		cout << endl;
	}
}
