#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = 0;
	while (n--) {
		int b;
		string c;
		cin >> b >> c;
		if (c == "nej") a = max(a, b);
	}
	cout << a << endl;
}
