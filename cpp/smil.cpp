#include<bits/stdc++.h>
using namespace std;

int main() {
	string smil;
	cin >> smil;
	for (int i = 0; i < smil.length(); i++) {
		if (smil[i] == ':' || smil[i] == ';') {
			if (i + 1 < smil.length() && smil[i+1] == ')')
				cout << i << endl;
			else if (i + 2 < smil.length() && smil[i+1] == '-' && smil[i+2] == ')')
				cout << i << endl;
		}
	}
}
