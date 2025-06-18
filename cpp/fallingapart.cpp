#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> a;
	cin >> n;
	while (n--) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.rbegin(), a.rend());
	int b = 0, c = 0;
	for (int i = 0; i < a.size(); i++) {
		if (i % 2 == 0) b += a[i];
		else c += a[i];
	}
	cout << b << " " << c << endl;
}
