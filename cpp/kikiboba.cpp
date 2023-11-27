#include<bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;
	int k = 0, b = 0;
	for (auto i : word) {
		if (i == 'k') k++;
		if (i == 'b') b++;
	}
	if (k == 0 && b == 0) cout << "none" << endl;
	else if (k == b) cout << "boki" << endl;
	else if (k > b) cout << "kiki" << endl;
	else cout << "boba" << endl;
}
