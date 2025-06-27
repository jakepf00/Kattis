#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(13, 4);
	for (int i = 0; i < n; i++) {
		string b;
		cin >> b;
		b.erase(b.length() - 1, 1);
		if (b == "A") a[0]--;
		else if (b == "J") a[10]--;
		else if (b == "Q") a[11]--;
		else if (b == "K") a[12]--;
		else a[stoi(b) - 1]--;
	}
	int b = 0;
	for (auto i : a) b = max(b, i);
	cout << (double) b / (double) (52 - n) << endl;
}
